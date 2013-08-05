/* plussz.c - one of the simplest max objects you can make -rdd 2001	(plussz is/was the name of a Hungarian vitamin C tablet-drink from the early 90s)		this example is provided for musicians who want to learn to write their own Max externals but who only	have rudimentary computer programming skills and feel somewhat overwhelmed by the other examples in the Max SDK 	this object has 2 inlets and one outlet	it responds to ints in its inlets and the 'bang' message in the left inlet	it responds to the 'assistance' message sent by Max when the mouse is positioned over an inlet or outlet		(including an assistance method is optional, but strongly sugggested)	it adds its input values together and outputs their sum*/#include "ext.h"  		// you must include this - it contains the external object's link to available Max functions#include "cexterns.h"typedef struct _plussz	// defines our object's internal variables for each instance in a patch{	t_object p_ob;		// object header - ALL objects MUST begin with this...	long p_value0;		// int value - received from the left inlet and stored internally for each object instance	long p_value1;		// int value - received from the right inlet and stored internally for each object instance	void *p_outlet;		// outlet creation - inlets are automatic, but objects must "own" their own outlets} t_plussz;void *plussz_class;		// global pointer to the object class - so max can reference the object // these are prototypes for the methods that are defined belowvoid plussz_bang(t_plussz *x);void plussz_int(t_plussz *x, long n);//void plussz_in1(t_plussz *x, long n);void plussz_assist(t_plussz *x, void *b, long m, long a, char *s);void *plussz_new(long n);void cmyron_start(t_plussz *x, long w,long h);void cmyron_stop(t_plussz *x);void cmyron_update(t_plussz *x);void cmyron_version(t_plussz *x);//--------------------------------------------------------------------------void main(void){	setup((t_messlist **)&plussz_class, (method)plussz_new, 0L, (short)sizeof(t_plussz), 0L, A_DEFLONG, 0); 	// setup() loads our external into Max's memory so it can be used in a patch	// plussz_new = object creation method defined below, A_DEFLONG = its (optional) arguement is a long (32-bit) int 		addbang((method)plussz_bang);		// the method it uses when it gets a bang in the left inlet 	addint((method)plussz_int);			// the method for an int in the left inlet (inlet 0) 	//addinx((method)plussz_in1, 1);		// the method for an int in the right inlet (inlet 1) 	addmess((method)plussz_assist, "assist", A_CANT, 0); // (optional) assistance method needs to be declared like this		addmess((method)cmyron_start,"start", A_LONG,A_LONG, 0);	addmess((method)cmyron_stop,"stop", 0);	addmess((method)cmyron_update,"update", 0);	addmess((method)cmyron_version,"version", 0);		post("Myron loaded",0);	// post any important info to the max window when our object is laoded}//--------------------------------------------------------------------------void cmyron_start(t_plussz *x, long w,long h){	myron_start(w,h);}void cmyron_stop(t_plussz *x){	myron_stop();}void cmyron_update(t_plussz *x){	int c;	myron_update();	c = myron_globCount();	if(c!=0){		outlet_int(x->p_outlet, c);	// send out the sum on bang 	}}void cmyron_version(t_plussz *x){	myron_update();		outlet_anything(x->p_outlet, gensym((char*)myron_version()),0,0);	// send out the sum on bang }//--------------------------------------------------------------------------void plussz_bang(t_plussz *x)		// x = reference to this instance of the object {	//long sum;						// local variable for this method	int count;		//myron_start(320,240);	myron_update();	count = myron_globCount();		//myron_stop();			//sum = x->p_value0+x->p_value1;	// add left and right operands	if(count!=0)outlet_int(x->p_outlet, count);	// send out the sum on bang 		}//--------------------------------------------------------------------------void plussz_int(t_plussz *x, long n)	// x = the instance of the object; n = the int received in the left inlet {	long sum;							// local variable for this method		x->p_value0 = n;					// store left operand value in instance's data structure	sum = n + x->p_value1;				// add left and right operands	outlet_int(x->p_outlet, sum);		// ... and send it out the outlet }//--------------------------------------------------------------------------/*void plussz_in1(t_plussz *x, long n)	// x = the instance of the object, n = the int received in the right inlet {	x->p_value1 = n;					// just store right operand value in instance's data structure and do nothing else}*///--------------------------------------------------------------------------void plussz_assist(t_plussz *x, void *b, long m, long a, char *s) // 4 final arguments are always the same for the assistance method{	if (m == ASSIST_OUTLET)		sprintf(s,"Output (could be a lot of things)");	else {		switch (a) {			case 0:			sprintf(s,"input inlet (see reference)");			break;		//case 1:		//	sprintf(s,"Right Operand (Added to Left)");		//	break;		}	}}//--------------------------------------------------------------------------void *plussz_new(long n)		// n = int argument typed into object box (A_DEFLONG) -- defaults to 0 if no args are typed{	t_plussz *x;				// local variable (pointer to a t_plussz data structure)	x = (t_plussz *)newobject(plussz_class); // create a new instance of this object		//intin(x,1);					// create a second int inlet (leftmost inlet is automatic - all objects have one inlet by default)	x->p_outlet = intout(x);	// create an int outlet and assign it to our outlet variable in the instance's data structure		x->p_value0	= 0;			// set initial (default) left operand value in the instance's data structure	//x->p_value1	= n;			// set initial (default) right operand value (n = variable passed to plussz_new)		post(" new Myron object instance added to patch",0); // post important info to the max window when new instance is created		return(x);					// return a reference to the object instance }