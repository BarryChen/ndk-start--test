//
// Created by william wang on 2018/9/18.
//

#include "com_example_williamwang_myapplication_NdkTest.h"
JNIEXPORT jstring JNICALL Java_com_example_williamwang_myapplication_NdkTest_getString
  (JNIEnv *env, jclass obj)
{

(env)->NewStringUTF("hello ndk");
    return (env)->NewStringUTF("hello ndk");
}