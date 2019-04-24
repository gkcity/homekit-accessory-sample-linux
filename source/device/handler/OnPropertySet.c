/**
* Copyright (C) 2013-2015
*
* @author jxfengzi@gmail.com
* @date   2018-11-12
*
* @file   OnPropertySet.c
*
* @remark
*
*/

#include "OnPropertySet.h"
#include <status/HapStatus.h>
#include "../iid/IID.h"
#include "../print/PrintValue.h"
#include "S_1_AccessoryInformation/S_1_AccessoryInformation_doSet.h"
#include "S_8_Lightbulb/S_8_Lightbulb_doSet.h"
#include "S_11_HapProtocolInformation/S_11_HapProtocolInformation_doSet.h"

void OnPropertySet(PropertyOperation *o)
{
    printf("OnPropertySet: did=[%s], siid = [%d], piid = [%d]\n", o->pid.did, o->pid.siid, o->pid.iid);
    printValue(o->value);

    switch (o->pid.siid)
    {
        case IID_1_AccessoryInformation:
            S_1_AccessoryInformation_doSet(o);
            break;

        case IID_8_Lightbulb:
            S_8_Lightbulb_doSet(o);
            break;

        case IID_11_HapProtocolInformation:
            S_11_HapProtocolInformation_doSet(o);
            break;

        default:
            o->status = HAP_OUT_OF_RESOURCES;
            break;
    }
}