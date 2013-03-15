/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class openni_java_VideoStream */

#ifndef _Included_openni_java_VideoStream
#define _Included_openni_java_VideoStream
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     openni_java_VideoStream
 * Method:    isValid
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_openni_java_VideoStream_isValid
  (JNIEnv *, jobject,jlong);

/*
 * Class:     openni_java_VideoStream
 * Method:    create
 * Signature: (JIJ)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoStream_create
  (JNIEnv *, jobject, jlong, jint, jlong);

/*
 * Class:     openni_java_VideoStream
 * Method:    destroy
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_openni_java_VideoStream_destroy
  (JNIEnv *, jobject, jlong);

/*
 * Class:     openni_java_VideoStream
 * Method:    getSensorInfo
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_openni_java_VideoStream_getSensorInfo
  (JNIEnv *, jobject, jlong);

/*
 * Class:     openni_java_VideoStream
 * Method:    start
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoStream_start
  (JNIEnv *, jobject, jlong);

/*
 * Class:     openni_java_VideoStream
 * Method:    stop
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_openni_java_VideoStream_stop
  (JNIEnv *, jobject, jlong);

/*
 * Class:     openni_java_VideoStream
 * Method:    readFrame
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoStream_readFrame
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     openni_java_VideoStream
 * Method:    getCameraSettings
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_openni_java_VideoStream_getCameraSettings
  (JNIEnv *, jobject, jlong);

/*
 * Class:     openni_java_VideoStream
 * Method:    getProperty
 * Signature: (IJIJ)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoStream_getProperty
  (JNIEnv *, jobject, jint, jlong, jint, jlong);

/*
 * Class:     openni_java_VideoStream
 * Method:    setProperty
 * Signature: (IJIJ)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoStream_setProperty
  (JNIEnv *, jobject, jint, jlong, jint, jlong);

/*
 * Class:     openni_java_VideoStream
 * Method:    getVideoMode
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_openni_java_VideoStream_getVideoMode
  (JNIEnv *, jobject, jlong);

/*
 * Class:     openni_java_VideoStream
 * Method:    setVideoMode
 * Signature: (JJ)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoStream_setVideoMode
  (JNIEnv *, jobject, jlong, jlong);

/*
 * Class:     openni_java_VideoStream
 * Method:    getMaxPixelValue
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoStream_getMaxPixelValue
  (JNIEnv *, jobject, jlong);

/*
 * Class:     openni_java_VideoStream
 * Method:    getMinPixelValue
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoStream_getMinPixelValue
  (JNIEnv *, jobject, jlong);

/*
 * Class:     openni_java_VideoStream
 * Method:    isCroppingSupported
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_openni_java_VideoStream_isCroppingSupported
  (JNIEnv *, jobject, jlong);

/*
 * Class:     openni_java_VideoStream
 * Method:    getCropping
 * Signature: (IIIIJ)Z
 */
JNIEXPORT jboolean JNICALL Java_openni_java_VideoStream_getCropping
  (JNIEnv *, jobject, jint, jint, jint, jint, jlong);

/*
 * Class:     openni_java_VideoStream
 * Method:    setCropping
 * Signature: (IIIIJ)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoStream_setCropping
  (JNIEnv *, jobject, jint, jint, jint, jint, jlong);

/*
 * Class:     openni_java_VideoStream
 * Method:    resetCropping
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoStream_resetCropping
  (JNIEnv *, jobject, jlong);

/*
 * Class:     openni_java_VideoStream
 * Method:    getMirroringEnabled
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_openni_java_VideoStream_getMirroringEnabled
  (JNIEnv *, jobject, jlong);

/*
 * Class:     openni_java_VideoStream
 * Method:    setMirroringEnabled
 * Signature: (ZJ)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoStream_setMirroringEnabled
  (JNIEnv *, jobject, jboolean, jlong);

/*
 * Class:     openni_java_VideoStream
 * Method:    getHorizontalFieldOfView
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_openni_java_VideoStream_getHorizontalFieldOfView
  (JNIEnv *, jobject, jlong);

/*
 * Class:     openni_java_VideoStream
 * Method:    getVerticalFieldOfView
 * Signature: (J)F
 */
JNIEXPORT jfloat JNICALL Java_openni_java_VideoStream_getVerticalFieldOfView
  (JNIEnv *, jobject, jlong);

/*
 * Class:     openni_java_VideoStream
 * Method:    isPropertySupported
 * Signature: (IJ)Z
 */
JNIEXPORT jboolean JNICALL Java_openni_java_VideoStream_isPropertySupported
  (JNIEnv *, jobject, jint, jlong);

/*
 * Class:     openni_java_VideoStream
 * Method:    invoke
 * Signature: (IJIJ)I
 */
JNIEXPORT jint JNICALL Java_openni_java_VideoStream_invoke
  (JNIEnv *, jobject, jint, jlong, jint, jlong);

/*
 * Class:     openni_java_VideoStream
 * Method:    isCommandSupported
 * Signature: (IJ)Z
 */
JNIEXPORT jboolean JNICALL Java_openni_java_VideoStream_isCommandSupported
  (JNIEnv *, jobject, jint, jlong);

/*
 * Class:     openni_java_VideoStream
 * Method:    Videotream
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_openni_java_VideoStream_Videotream
  (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif