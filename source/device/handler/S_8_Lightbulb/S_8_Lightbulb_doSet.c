/**
* Copyright (C) 2013-2015
*
* @author jxfengzi@gmail.com
* @date   2018-11-12
*
* @file   S_8_Lightbulb_doSet.c
*
* @remark
*
*/

#include "S_8_Lightbulb_doSet.h"
#include "../../iid/IID.h"

static void P_8_9_On_doSet(PropertyOperation *o)
{
}

static void P_8_10_Brightness_doSet(PropertyOperation *o)
{
}


void S_8_Lightbulb_doSet(PropertyOperation *o)
{
    printf("S_8_Lightbulb_doSet: piid = [%d]\n", o->pid.iid);

    switch (o->pid.iid)
    {
        case IID_8_9_On:
            P_8_9_On_doSet(o);
            break;

        case IID_8_10_Brightness:
            P_8_10_Brightness_doSet(o);
            break;

        default:
            o->status = -100;
            break;
    }
}