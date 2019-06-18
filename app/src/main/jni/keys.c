//
// Created by Kobayashi on 17/06/2019.
//

#include <jni.h>

JNIEXPORT jstring JNICALL
Java_com_hylsonk_ofuscandostringsndk_MainActivity_getNativeHello(JNIEnv *env, jobject instance) {

 return (*env)->  NewStringUTF(env, "Hello World!!");
}