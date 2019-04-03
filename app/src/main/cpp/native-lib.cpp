#include <jni.h>
#include <android/input.h>
#include "AudioEngine.h"

static AudioEngine *audioEngine = new AudioEngine();

extern "C" {

JNIEXPORT void JNICALL
Java_com_frnt_zawzaw_audiowavemaker_MainActivity_touchEvent(JNIEnv *env, jobject obj, jint action) {
    switch (action) {
        case AMOTION_EVENT_ACTION_DOWN:
            audioEngine->setTonOn(true);
            break;

        case AMOTION_EVENT_ACTION_UP:
            audioEngine->setTonOn(false);
            break;
        default:
            break;
    }
}

JNIEXPORT void JNICALL
Java_com_frnt_zawzaw_audiowavemaker_MainActivity_startEngine(JNIEnv *env, jobject instance) {
    audioEngine->start();
}

JNIEXPORT void JNICALL
Java_com_frnt_zawzaw_audiowavemaker_MainActivity_stopEngine(JNIEnv *env, jobject instance) {
    audioEngine->stop();
}

}
