/*****************************************************************************\
*                                                                             *
* ole2ver.h -   OLE 2 Version Number Info                                     *
*                                                                             *
*               Copyright (c) Microsoft Corporation. All rights reserved.     *
*                                                                             *
\*****************************************************************************/

#ifndef _OLE2VER_H_
#pragma option push -b -a8 -pc -A- -w-pun /*P_O_Push*/
#define _OLE2VER_H_
#if _MSC_VER > 1000
#pragma once
#endif
#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#define rmm     23
#define rup     639

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma option pop /*P_O_Pop*/
#endif
