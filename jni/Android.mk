#  OpenGL lighting example
#
LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)
include $(LOCAL_PATH)/../../bluegin/BlueGin.mk

LOCAL_MODULE 	 := libscaffold
LOCAL_CFLAGS 	 := $(BLUEGIN_CFLAGS)
LOCAL_C_INCLUDES := $(BLUEGIN_INCLUDE) jni/include

LOCAL_SRC_FILES  := src/PlayState.cpp \
				    src/ScaffoldApp.cpp

LOCAL_STATIC_LIBRARIES := cinder-prebuilt bluegin-prebuilt flx-prebuilt box2d-prebuilt 
# LOCAL_LDLIBS 	 := $(BLUEGIN_LDLIBS)

include $(BUILD_SHARED_LIBRARY)

include $(LOCAL_PATH)/../../bluegin/Modules.mk

