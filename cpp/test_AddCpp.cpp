#include "test_AddCpp.h"

JNIEXPORT jint JNICALL Java_test_AddCpp_add
  (JNIEnv * env, jclass cls, jint a, jint b)
{
    return a + b;
}