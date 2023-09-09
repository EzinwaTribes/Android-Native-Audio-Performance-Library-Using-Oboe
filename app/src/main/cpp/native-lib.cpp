#include <jni.h>
#include <string>
#include <oboe/Definitions.h>

extern "C" JNIEXPORT jstring JNICALL
Java_com_ezinwa_nativeaudioperformance_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
