#include "com_packtpub_store_Store.h"


JNIEXPORT jint JNICALL Java_com_example_brovkoroman_storenative_Store_getCount
  (JNIEnv* pEnv, jobject pObject) {
    return 20;
//	pEnv = 0;
//	return pEnv->CallIntMethod(0, 0);
}
