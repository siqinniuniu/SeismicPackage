//////// DO NOT EDIT THIS FILE - it is machine generated ////////

#include "CpseisCodmo.hh"
#include <jni.h>

extern "C"
{
  JNIEXPORT jlong JNICALL Java_org_cpseis_wrappers_CpseisCodmo_nativeCreate
    (JNIEnv *env, jobject obj)
  {
    CpseisCodmo *module = new CpseisCodmo();
    return (jlong)module;
  }
}