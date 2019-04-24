/**
 * Copyright (C) 2013-2015
 *
 * @author jxfengzi@gmail.com
 * @date   2018-11-12
 *
 * @file   Lightbulb.c
 *
 * @remark
 *
 */

#include <tiny_snprintf.h>
#include "Lightbulb.h"
#include "../handler/OnPropertySet.h"
#include "../handler/OnPropertyGet.h"
#include "../initializer/InitializeConfiguration.h"
#include "S_1_AccessoryInformation.h"
#include "S_8_Lightbulb.h"
#include "S_11_HapProtocolInformation.h"

Product * Lightbulb(const char *did, const char *name, const char *ip, const char *setupCode)
{
    Product *thiz = NULL;

    do
    {
        if (did == NULL || name == NULL || ip == NULL || setupCode == NULL)
        {
            break;
        }

        thiz = Product_New();
        if (thiz == NULL)
        {
            break;
        }

        thiz->onGet = OnPropertyGet;
        thiz->onSet = OnPropertySet;

        if (RET_FAILED(TinyList_AddTail(&thiz->device.services, S_1_AccessoryInformation())))
        {
            Product_Delete(thiz);
            thiz = NULL;
            break;
        }

        if (RET_FAILED(TinyList_AddTail(&thiz->device.services, S_8_Lightbulb())))
        {
            Product_Delete(thiz);
            thiz = NULL;
            break;
        }

        if (RET_FAILED(TinyList_AddTail(&thiz->device.services, S_11_HapProtocolInformation())))
        {
            Product_Delete(thiz);
            thiz = NULL;
            break;
        }

        InitializeConfiguration(&thiz->config, did, name, ip, setupCode);
    } while (false);

    return thiz;
}