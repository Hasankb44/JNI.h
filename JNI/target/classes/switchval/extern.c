#include <jni.h>
#include "switchval_Main.h"
#include <stdio.h>


JNIEXPORT void JNICALL Java_switchval_Main_setSum(JNIEnv *env, jobject obj, jint x, jint y) {

    jclass class = (*env)->GetObjectClass(env, obj);

    jfieldID field = (*env)->GetFieldID(env, class, "sum", "I");

    if (field == NULL) {
        perror("sum is not found\n");
        return;
    }

    jint curval = (*env)->GetIntField(env, obj, field);

    jint newvalue = x + y;

    (*env)->SetIntField(env, obj, field, newvalue);
}
