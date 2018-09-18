LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := JniTest
LOCAL_SRC_FILES := com_example_williamwang_myapplication_NdkTest.cpp
include $(BUILD_SHARED_LIBRARY)