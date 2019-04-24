/**
* Copyright (C) 2013-2015
*
* @author jxfengzi@gmail.com
* @date   2018-11-12
*
* @file   S_11_HapProtocolInformation_doGet.c
*
* @remark
*
*/

#include "S_11_HapProtocolInformation_doGet.h"
#include "../../iid/IID.h"
#include <status/HapStatus.h>

/**
 * 格式: JsonValue_NewString
 * 取值: 字符串
 */
static void P_11_12_Version_doGet(PropertyOperation *o)
{
    o->value = JsonValue_NewString("1.1");     // TODO: 这里需要读到属性真正的值
    o->status = HAP_OK;

    printf("P_11_12_Version_doGet: %s\n", o->value->data.string->value);
}

void S_11_HapProtocolInformation_doGet(PropertyOperation *o)
{
    printf("S_11_HapProtocolInformation_doGet: piid = [%d]\n", o->pid.iid);

    switch (o->pid.iid)
    {
        case IID_11_12_Version:
            P_11_12_Version_doGet(o);
            break;

        default:
            o->status = HAP_OUT_OF_RESOURCES;
            break;
    }
}