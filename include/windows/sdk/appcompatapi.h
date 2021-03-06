/*************************************************************************************
*                                                                                    *
* AppCompat.h -- Appcompat procedure declarations, constant definitions and macros   *
*                                                                                    *
* Copyright (c) Microsoft Corporation. All rights reserved.                          *
*                                                                                    *
**************************************************************************************/


#ifndef __APPCOMPAT_H_
#pragma option push -b -a8 -pc -A- -w-pun /*P_O_Push*/
#define __APPCOMPAT_H_

#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#ifdef __cplusplus
extern "C" {
#endif

#ifndef SDBAPI
#define SDBAPI STDAPICALLTYPE
#endif

BOOL
SDBAPI
ApphelpCheckShellObject(
    _In_  REFCLSID    ObjectCLSID,
    _In_  BOOL        bShimIfNecessary,
    _Out_ ULONGLONG*  pullFlags
    );


#ifdef __cplusplus
}
#endif


#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma option pop /*P_O_Pop*/
#endif // __APPCOMPAT_H_
