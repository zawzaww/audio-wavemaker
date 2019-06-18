LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := native-lib	
LOCAL_SRC_FILES += native-lib.cpp \
                   AudioEngine.cpp \
		           Oscillator.cpp
				   
LOCAL_LDLIBS += -lOpenSLES
LOCAL_LDLIBS += -llog
LOCAL_LDLIBS += -landroid
LOCAL_LDLIBS += -latomic
APP_STL := c++_static
LOCAL_CPPFLAGS  += -std=c++11
LOCAL_STATIC_LIBRARIES += android_native_app_glue

include $(BUILD_SHARED_LIBRARY)
$(call import-module, android/native_app_glue)
