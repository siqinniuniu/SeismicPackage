/*<license>
 -------------------------------------------------------------------------------
  Copyright (c) 2007 ConocoPhillips Company
 
  Permission is hereby granted, free of charge, to any person obtaining a copy
  of this software and associated documentation files (the "Software"), to deal
  in the Software without restriction, including without limitation the rights
  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
  copies of the Software, and to permit persons to whom the Software is
  furnished to do so, subject to the following conditions:
 
  The above copyright notice and this permission notice shall be included in all
  copies or substantial portions of the Software.
 
  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
  SOFTWARE.
 -------------------------------------------------------------------------------
 </license>*/
/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_conoco_shared_XClipboard */

#ifndef _Included_com_conoco_shared_XClipboard
#define _Included_com_conoco_shared_XClipboard
#ifdef __cplusplus
extern "C" {
#endif
/* Inaccessible static: errLevel */
/* Inaccessible static: successful */
/* Inaccessible static: origErrorMessage */
/*
 * Class:     com_conoco_shared_XClipboard
 * Method:    closeXConnection
 * Signature: ([B)J
 */
JNIEXPORT jlong JNICALL Java_com_conoco_shared_XClipboard_closeXConnection
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_conoco_shared_XClipboard
 * Method:    openXConnection
 * Signature: ()[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_conoco_shared_XClipboard_openXConnection
  (JNIEnv *, jobject);

/*
 * Class:     com_conoco_shared_XClipboard
 * Method:    readCutBuffer0
 * Signature: ([B)[B
 */
JNIEXPORT jbyteArray JNICALL Java_com_conoco_shared_XClipboard_readCutBuffer0
  (JNIEnv *, jobject, jbyteArray);

/*
 * Class:     com_conoco_shared_XClipboard
 * Method:    readSelection
 * Signature: ([B[B[B)Ljava/lang/Object;
 */
JNIEXPORT jobject JNICALL Java_com_conoco_shared_XClipboard_readSelection
  (JNIEnv *, jobject, jbyteArray, jbyteArray, jbyteArray);

/*
 * Class:     com_conoco_shared_XClipboard
 * Method:    setErrorLevel
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_conoco_shared_XClipboard_setErrorLevel
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_conoco_shared_XClipboard
 * Method:    writeCutBuffer0
 * Signature: ([B[B)I
 */
JNIEXPORT jint JNICALL Java_com_conoco_shared_XClipboard_writeCutBuffer0
  (JNIEnv *, jobject, jbyteArray, jbyteArray);

/*
 * Class:     com_conoco_shared_XClipboard
 * Method:    writePrimarySelection
 * Signature: ([B[B)I
 */
JNIEXPORT jint JNICALL Java_com_conoco_shared_XClipboard_writePrimarySelection
  (JNIEnv *, jobject, jbyteArray, jbyteArray);

#ifdef __cplusplus
}
#endif
#endif
