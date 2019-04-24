/**
 * Copyright (C) 2013-2015
 *
 * @author jxfengzi@gmail.com
 * @date   2018-11-12
 *
 * @file   S_11_HapProtocolInformation.c
 *
 * @remark
 *
 */

#include "S_11_HapProtocolInformation.h"
#include "P_11_12_Version.h"

Service * S_11_HapProtocolInformation(void)
{
    Service *thiz = NULL;

    do
    {
        thiz = Service_NewInstance(11, "homekit-spec", "hap-protocol-information", 0x000000A2, NULL);
        if (thiz == NULL)
        {
            break;
        }

        if (RET_FAILED(TinyList_AddTail(&thiz->properties, P_11_12_Version())))
        {
            Service_Delete(thiz);
            thiz = NULL;
            break;
        }
    } while (false);

    return thiz;
}