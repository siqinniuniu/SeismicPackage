//////// DO NOT EDIT THIS FILE - it is machine generated ////////

#include "CpseisMadc.hh"
#include <jni.h>

extern "C"
{
  JNIEXPORT jlong JNICALL Java_org_cpseis_wrappers_CpseisMadc_nativeCreate
    (JNIEnv *env, jobject obj)
  {
    CpseisMadc *module = new CpseisMadc();
    return (jlong)module;
  }
}
