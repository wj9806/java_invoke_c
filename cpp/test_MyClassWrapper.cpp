  
// MyClass.cpp  
#include "MyClass.h"  
#include <jni.h>
#include "test_MyClassWrapper.h"
  
JNIEXPORT void JNICALL Java_test_MyClassWrapper_callNative
  (JNIEnv * env, jobject thiz, jobject obj)
{
    jclass cls = env->GetObjectClass(obj);  
    jmethodID mid = env->GetMethodID(cls, "getValue", "()I");  
    jint value = env->CallIntMethod(obj, mid);  
  
    MyClass myClass(value);  
    myClass.doSomething();
}