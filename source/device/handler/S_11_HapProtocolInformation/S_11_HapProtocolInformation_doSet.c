/**
* Copyright (C) 2013-2015
*
* @author jxfengzi@gmail.com
* @date   2018-11-12
*
* @file   S_11_HapProtocolInformation_doSet.c
*
* @remark
*
*/

#include "S_11_HapProtocolInformation_doSet.h"
#include "../../iid/IID.h"
#include <status/HapStatus.h>

void S_11_HapProtocolInformation_doSet(PropertyOperation *o)
{
    printf("S_11_HapProtocolInformation_doSet: piid = [%d]\n", o->pid.iid);

    switch (o->pid.iid)
    {
        default:
            o->status = HAP_OUT_OF_RESOURCES;
            break;
    }
}