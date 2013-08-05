/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class JMyron_JMyron */

#ifndef _Included_JMyron_JMyron
#define _Included_JMyron_JMyron
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     JMyron_JMyron
 * Method:    native_start
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_JMyron_JMyron_native_1start
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     JMyron_JMyron
 * Method:    native_stop
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JMyron_JMyron_native_1stop
  (JNIEnv *, jobject);

/*
 * Class:     JMyron_JMyron
 * Method:    native_update
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JMyron_JMyron_native_1update
  (JNIEnv *, jobject);

/*
 * Class:     JMyron_JMyron
 * Method:    native_settings
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JMyron_JMyron_native_1settings
  (JNIEnv *, jobject);

/*
 * Class:     JMyron_JMyron
 * Method:    native_version
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_JMyron_JMyron_native_1version
  (JNIEnv *, jobject);

/*
 * Class:     JMyron_JMyron
 * Method:    native_findGlobs
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_JMyron_JMyron_native_1findGlobs
  (JNIEnv *, jobject, jint);

/*
 * Class:     JMyron_JMyron
 * Method:    native_sensitivity
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_JMyron_JMyron_native_1sensitivity
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     JMyron_JMyron
 * Method:    native_minDensity
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_JMyron_JMyron_native_1minDensity
  (JNIEnv *, jobject, jint);

/*
 * Class:     JMyron_JMyron
 * Method:    native_maxDensity
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_JMyron_JMyron_native_1maxDensity
  (JNIEnv *, jobject, jint);

/*
 * Class:     JMyron_JMyron
 * Method:    native_cameraImage
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_JMyron_JMyron_native_1cameraImage
  (JNIEnv *, jobject);

/*
 * Class:     JMyron_JMyron
 * Method:    native_globsImage
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_JMyron_JMyron_native_1globsImage
  (JNIEnv *, jobject);

/*
 * Class:     JMyron_JMyron
 * Method:    native_image
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_JMyron_JMyron_native_1image
  (JNIEnv *, jobject);

/*
 * Class:     JMyron_JMyron
 * Method:    native_differenceImage
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_JMyron_JMyron_native_1differenceImage
  (JNIEnv *, jobject);

/*
 * Class:     JMyron_JMyron
 * Method:    native_retinaImage
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_JMyron_JMyron_native_1retinaImage
  (JNIEnv *, jobject);

/*
 * Class:     JMyron_JMyron
 * Method:    native_cameraImageCopy
 * Signature: ([I)V
 */
JNIEXPORT void JNICALL Java_JMyron_JMyron_native_1cameraImageCopy
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     JMyron_JMyron
 * Method:    native_globsImageCopy
 * Signature: ([I)V
 */
JNIEXPORT void JNICALL Java_JMyron_JMyron_native_1globsImageCopy
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     JMyron_JMyron
 * Method:    native_imageCopy
 * Signature: ([I)V
 */
JNIEXPORT void JNICALL Java_JMyron_JMyron_native_1imageCopy
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     JMyron_JMyron
 * Method:    native_differenceImageCopy
 * Signature: ([I)V
 */
JNIEXPORT void JNICALL Java_JMyron_JMyron_native_1differenceImageCopy
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     JMyron_JMyron
 * Method:    native_retinaImageCopy
 * Signature: ([I)V
 */
JNIEXPORT void JNICALL Java_JMyron_JMyron_native_1retinaImageCopy
  (JNIEnv *, jobject, jintArray);

/*
 * Class:     JMyron_JMyron
 * Method:    native_globBoxes
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_JMyron_JMyron_native_1globBoxes
  (JNIEnv *, jobject);

/*
 * Class:     JMyron_JMyron
 * Method:    native_globCount
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_JMyron_JMyron_native_1globCount
  (JNIEnv *, jobject);

/*
 * Class:     JMyron_JMyron
 * Method:    native_globCenters
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_JMyron_JMyron_native_1globCenters
  (JNIEnv *, jobject);

/*
 * Class:     JMyron_JMyron
 * Method:    native_globPixels
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_JMyron_JMyron_native_1globPixels
  (JNIEnv *, jobject);

/*
 * Class:     JMyron_JMyron
 * Method:    native_globEdgePoints
 * Signature: (I)[I
 */
JNIEXPORT jintArray JNICALL Java_JMyron_JMyron_native_1globEdgePoints
  (JNIEnv *, jobject, jint);

/*
 * Class:     JMyron_JMyron
 * Method:    native_globQuads
 * Signature: (FF)[I
 */
JNIEXPORT jintArray JNICALL Java_JMyron_JMyron_native_1globQuads
  (JNIEnv *, jobject, jfloat, jfloat);

/*
 * Class:     JMyron_JMyron
 * Method:    native_trackColor
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_JMyron_JMyron_native_1trackColor
  (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     JMyron_JMyron
 * Method:    native_trackNotColor
 * Signature: (IIII)V
 */
JNIEXPORT void JNICALL Java_JMyron_JMyron_native_1trackNotColor
  (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     JMyron_JMyron
 * Method:    native_average
 * Signature: (IIII)I
 */
JNIEXPORT jint JNICALL Java_JMyron_JMyron_native_1average
  (JNIEnv *, jobject, jint, jint, jint, jint);

/*
 * Class:     JMyron_JMyron
 * Method:    native_adaptivity
 * Signature: (F)V
 */
JNIEXPORT void JNICALL Java_JMyron_JMyron_native_1adaptivity
  (JNIEnv *, jobject, jfloat);

/*
 * Class:     JMyron_JMyron
 * Method:    native_adapt
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_JMyron_JMyron_native_1adapt
  (JNIEnv *, jobject);

/*
 * Class:     JMyron_JMyron
 * Method:    native_hijack
 * Signature: (II[I)V
 */
JNIEXPORT void JNICALL Java_JMyron_JMyron_native_1hijack
  (JNIEnv *, jobject, jint, jint, jintArray);

/*
 * Class:     JMyron_JMyron
 * Method:    native_width
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_JMyron_JMyron_native_1width
  (JNIEnv *, jobject);

/*
 * Class:     JMyron_JMyron
 * Method:    native_height
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_JMyron_JMyron_native_1height
  (JNIEnv *, jobject);

/*
 * Class:     JMyron_JMyron
 * Method:    native_getForcedWidth
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_JMyron_JMyron_native_1getForcedWidth
  (JNIEnv *, jobject);

/*
 * Class:     JMyron_JMyron
 * Method:    native_getForcedHeight
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_JMyron_JMyron_native_1getForcedHeight
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
