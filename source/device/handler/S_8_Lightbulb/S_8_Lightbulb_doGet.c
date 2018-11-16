/**
* Copyright (C) 2013-2015
*
* @author jxfengzi@gmail.com
* @date   2018-11-12
*
* @file   S_8_Lightbulb_doGet.c
*
* @remark
*
*/

#include "S_8_Lightbulb_doGet.h"
#include "../../iid/IID.h"

static void P_8_9_On_doGet(PropertyOperation *o)
{
    // o->value = JsonValue_NewString("GeekCity");
}

static void P_8_10_Brightness_doGet(PropertyOperation *o)
{
    // o->value = JsonValue_NewString("GeekCity");
}

void S_8_Lightbulb_doGet(PropertyOperation *o)
{
    printf("S_8_Lightbulb_doGet: piid = [%d]\n", o->pid.iid);

    switch (o->pid.iid)
    {
        case IID_8_9_On:
            P_8_9_On_doGet(o);
            break;

        case IID_8_10_Brightness:
            P_8_10_Brightness_doGet(o);
            break;

        default:
            o->status = -100;
            break;
    }
}