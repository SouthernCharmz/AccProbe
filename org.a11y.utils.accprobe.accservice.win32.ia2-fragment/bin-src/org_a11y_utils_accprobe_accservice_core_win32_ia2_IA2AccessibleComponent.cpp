/* DO NOT EDIT THIS FILE - it is machine generated */
#include "org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2AccessibleComponent.h"


IAccessibleComponent* GetRef( JNIEnv *env, jobject jca){
    jclass cls = env->GetObjectClass(jca);
    jmethodID methID = env->GetMethodID(cls, "internalRef", "()I");
    return (IAccessibleComponent*) env->CallIntMethod(jca, methID);
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2AccessibleComponent
 * Method:    internalGetLocation
 * Signature: ()[I
 */
JNIEXPORT jintArray JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2AccessibleComponent_internalGetLocation
  (JNIEnv * env, jobject jca) { 
	IAccessibleComponent* ptr = GetRef(env,jca);
	long x=0;
	long y=0;
	HRESULT hr = ptr->get_locationInParent(&x, &y);
	if(hr!=S_OK){
		putErrorCode(_T("locationInParent"), CAccessible::getHRESULTString(hr), env, jca);
	}
	if( SUCCEEDED(hr))
	{
		jint loc[2];
		loc[0] = x;
		loc[1] = y;
		jintArray jarray = env->NewIntArray(2);
		env->SetIntArrayRegion(jarray,0,2,loc);
		return jarray;
	}
	return 0;
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2AccessibleComponent
 * Method:    internalGetForeground
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2AccessibleComponent_internalGetForeground
  (JNIEnv * env, jobject jca) { 
	IAccessibleComponent* ptr = GetRef(env,jca);
	long fGround=0xDEADBEEF;
	HRESULT hr = ptr->get_foreground(&fGround);
	if(hr!=S_OK){
		putErrorCode(_T("foreground"), CAccessible::getHRESULTString(hr), env, jca);
	}
	return (int)fGround;
}

/*
 * Class:     org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2AccessibleComponent
 * Method:    internalGetBackground
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_a11y_utils_accprobe_accservice_core_win32_ia2_IA2AccessibleComponent_internalGetBackground
  (JNIEnv * env, jobject jca) {
	IAccessibleComponent* ptr = GetRef(env,jca);
	long bGround=0xDEADBEEF;
	HRESULT hr = ptr->get_background(&bGround);
	if(hr!=S_OK){
		putErrorCode(_T("background"), CAccessible::getHRESULTString(hr), env, jca);
	}
	return (int)bGround;
}