LOCAL_PATH := $(call my-dir)
include $(CLEAR_VARS)

LOCAL_MODULE := luacjson_static

LOCAL_MODULE_FILENAME := libluacjson

LOCAL_SRC_FILES := ./lua_cjson.c \
				   ./strbuf.c \
				   ./fpconv.c

LOCAL_C_INCLUDES := $(LOCAL_PATH) \
					$(LOCAL_PATH)/../../../mobile/scripting/lua/lua

LOCAL_CFLAGS := -DNDEBUG -O2
LOCAL_EXPORT_CFLAGS := -DNDEBUG -O2

LOCAL_EXPORT_C_INCLUDES := $(LOCAL_PATH) \

include $(BUILD_STATIC_LIBRARY)
