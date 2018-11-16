/**
 * Copyright (C) 2013-2015
 *
 * @author jxfengzi@gmail.com
 * @date   2013-11-19
 *
 * @file   HapStatus.h
 *
 * @remark
 *
 */

#ifndef __HAP_STATUS_H__
#define __HAP_STATUS_H__

#include "tiny_base.h"

TINY_BEGIN_DECLS


typedef enum _HapStatus
{
    HAP_OK = 0,
    HAP_REQUEST_DEFINED = -70401,
    HAP_UNABLE_COMMUNICATE = -70402,
    HAP_BUSY = -70403,
    HAP_CANNOT_WRITE = -70404,
    HAP_CANNOT_READ = -70405,
    HAP_CANNOT_NOTIFY = -70406,
    HAP_OUT_OF_RESOURCES = -70407,
    HAP_TIMEOUT = -70408,
    HAP_RESOURCE_NOT_EXIST = -70409,
    HAP_INVALID_VALUE = -70410,
} HapStatus;


TINY_END_DECLS

#endif /* __HAP_STATUS_H__ */