/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class javax_microedition_m3g_PolygonMode */

#ifndef _Included_javax_microedition_m3g_PolygonMode
#define _Included_javax_microedition_m3g_PolygonMode
#ifdef __cplusplus
extern "C" {
#endif
#undef javax_microedition_m3g_PolygonMode_CULL_BACK
#define javax_microedition_m3g_PolygonMode_CULL_BACK 160L
#undef javax_microedition_m3g_PolygonMode_CULL_FRONT
#define javax_microedition_m3g_PolygonMode_CULL_FRONT 161L
#undef javax_microedition_m3g_PolygonMode_CULL_NONE
#define javax_microedition_m3g_PolygonMode_CULL_NONE 162L
#undef javax_microedition_m3g_PolygonMode_SHADE_FLAT
#define javax_microedition_m3g_PolygonMode_SHADE_FLAT 164L
#undef javax_microedition_m3g_PolygonMode_SHADE_SMOOTH
#define javax_microedition_m3g_PolygonMode_SHADE_SMOOTH 165L
#undef javax_microedition_m3g_PolygonMode_WINDING_CCW
#define javax_microedition_m3g_PolygonMode_WINDING_CCW 168L
#undef javax_microedition_m3g_PolygonMode_WINDING_CW
#define javax_microedition_m3g_PolygonMode_WINDING_CW 169L
/*
 * Class:     javax_microedition_m3g_PolygonMode
 * Method:    _ctor
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_javax_microedition_m3g_PolygonMode__1ctor
  (JNIEnv *, jclass, jint);

/*
 * Class:     javax_microedition_m3g_PolygonMode
 * Method:    _setLocalCameraLightingEnable
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_javax_microedition_m3g_PolygonMode__1setLocalCameraLightingEnable
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     javax_microedition_m3g_PolygonMode
 * Method:    _setPerspectiveCorrectionEnable
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_javax_microedition_m3g_PolygonMode__1setPerspectiveCorrectionEnable
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     javax_microedition_m3g_PolygonMode
 * Method:    _setCulling
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_javax_microedition_m3g_PolygonMode__1setCulling
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     javax_microedition_m3g_PolygonMode
 * Method:    _getCulling
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_javax_microedition_m3g_PolygonMode__1getCulling
  (JNIEnv *, jclass, jint);

/*
 * Class:     javax_microedition_m3g_PolygonMode
 * Method:    _setWinding
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_javax_microedition_m3g_PolygonMode__1setWinding
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     javax_microedition_m3g_PolygonMode
 * Method:    _getWinding
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_javax_microedition_m3g_PolygonMode__1getWinding
  (JNIEnv *, jclass, jint);

/*
 * Class:     javax_microedition_m3g_PolygonMode
 * Method:    _setShading
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_javax_microedition_m3g_PolygonMode__1setShading
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     javax_microedition_m3g_PolygonMode
 * Method:    _getShading
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_javax_microedition_m3g_PolygonMode__1getShading
  (JNIEnv *, jclass, jint);

/*
 * Class:     javax_microedition_m3g_PolygonMode
 * Method:    _setTwoSidedLightingEnable
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_javax_microedition_m3g_PolygonMode__1setTwoSidedLightingEnable
  (JNIEnv *, jclass, jint, jboolean);

/*
 * Class:     javax_microedition_m3g_PolygonMode
 * Method:    _isTwoSidedLightingEnabled
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_javax_microedition_m3g_PolygonMode__1isTwoSidedLightingEnabled
  (JNIEnv *, jclass, jint);

/*
 * Class:     javax_microedition_m3g_PolygonMode
 * Method:    _isLocalCameraLightingEnabled
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_javax_microedition_m3g_PolygonMode__1isLocalCameraLightingEnabled
  (JNIEnv *, jclass, jint);

/*
 * Class:     javax_microedition_m3g_PolygonMode
 * Method:    _isPerspectiveCorrectionEnabled
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_javax_microedition_m3g_PolygonMode__1isPerspectiveCorrectionEnabled
  (JNIEnv *, jclass, jint);

#ifdef __cplusplus
}
#endif
#endif
