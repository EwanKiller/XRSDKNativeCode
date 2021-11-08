//
// Created by ThisEwan on 2021/11/6.
//

#ifndef XRSDKNATIVECODE_LOG_TOOL_ANDROID_H
#define XRSDKNATIVECODE_LOG_TOOL_ANDROID_H

#include "android/log.h"

#define LOG_TAG "XR SDK Native"
#define LOGD(...) __android_log_print(ANDROID_LOG_DEBUG,LOG_TAG, __VA_ARGS__)
#define LOGE(...) __android_log_print(ANDROID_LOG_ERROR,LOG_TAG, __VA_ARGS__)

#endif //XRSDKNATIVECODE_LOG_TOOL_ANDROID_H
