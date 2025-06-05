#include <jni.h>
#include <string>

// Simulate runtime injection (in a real app, this could come from JNI or a file)
extern "C" const char* get_api_key() {
    // In test, we’ll pass via BuildConfig; in production, use a secure mechanism
    return "${API_KEY}";
}

extern "C" JNIEXPORT jstring JNICALL
Java_com_example_secrettestapp_MainActivity_getApiKey(JNIEnv* env, jobject /* this */) {
    std::string api_key = get_api_key();
    return env->NewStringUTF(api_key.c_str());
}