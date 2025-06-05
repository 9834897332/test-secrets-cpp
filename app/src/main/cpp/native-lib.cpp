#include <jni.h>
#include <string>

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_secrettestapp_MainActivity_getApiKey(JNIEnv* env, jobject /* this */) {
    // Placeholder: secret will be injected at runtime
    std::string api_key = "PLACEHOLDER_API_KEY";
    return env->NewStringUTF(api_key.c_str());
}
