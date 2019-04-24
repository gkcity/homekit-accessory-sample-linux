/**
 * Copyright (C) 2013-2015
 *
 * @author jxfengzi@gmail.com
 * @date   2018-11-12
 *
 * @file   P_11_12_Version.h
 *
 * @remark
 *
 */

#include "P_11_12_Version.h"

Property * P_11_12_Version(void)
{
    Property *thiz = NULL;

    do
    {
        thiz = Property_NewInstance(12, "homekit-spec", "version", 0x00000037, NULL);
        if (thiz == NULL)
        {
            break;
        }

        thiz->access = ACCESS_READ;
        thiz->format = FORMAT_STRING;
    } while (false);

    return thiz;
}