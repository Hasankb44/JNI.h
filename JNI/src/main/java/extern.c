#include <stdio.h>
#include <jni.h>
#include <Main.h>


JNIEXPORT void JNICALL Java_Main_Test(JNIEnv *env, jobject obj) {

    const char *str = (*env)->GetStringUTFChars(env, "", NULL);


    printf("Hello World!!");
}
