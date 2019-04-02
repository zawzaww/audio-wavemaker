#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_frnt_zawzaw_audiowavemaker_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Audo Wavemaker Sample";
    return env->NewStringUTF(hello.c_str());
}
