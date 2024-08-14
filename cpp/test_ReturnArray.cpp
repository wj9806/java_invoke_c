#include "test_ReturnArray.h"

JNIEXPORT jintArray JNICALL Java_test_ReturnArray_returnIntArray
  (JNIEnv * env, jobject obj)
  {
    jintArray result;  
    jint fill[5] = {1, 2, 3, 4, 5};
    jsize len = sizeof(fill) / sizeof(fill[0]);  
  
    result = env->NewIntArray(len);  
    if (result == NULL) {  
        return NULL;
    }  
  
    // fill jintArray  
    env->SetIntArrayRegion(result, 0, len, fill);  
  
    return result;  
  }