//////// DO NOT EDIT THIS FILE - it is machine generated ////////

#include "CpseisElev.hh"
#include <jni.h>

extern "C"
{
  JNIEXPORT jlong JNICALL Java_org_cpseis_wrappers_CpseisElev_nativeCreate
    (JNIEnv *env, jobject obj)
  {
    CpseisElev *module = new CpseisElev();
    return (jlong)module;
  }
}