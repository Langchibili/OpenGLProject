/*

Copyright (c) Microsoft Corporation. All rights reserved.

Module Name:

    socketapi.h

Abstract:

    Prototypes and Definitions for Socket API
*/

#ifndef _SOCKETAPI_H
#pragma option push -b -a8 -pc -A- -w-pun /*P_O_Push*/
#define _SOCKETAPI_H

#ifdef _MSC_VER
#pragma once
#endif  // _MSC_VER

#ifdef __cplusplus
extern "C"
{
#endif

#include <winapifamily.h>

#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)

#if NTDDI_VERSION >= NTDDI_WIN8

HRESULT WINAPI SetSocketMediaStreamingMode(_In_ BOOL value);

#endif // NTDDI_VERSION >= NTDDI_WIN8

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) */
#pragma endregion

#ifdef __cplusplus
}
#endif

#pragma option pop /*P_O_Pop*/
#endif  // _SOCKETAPI_H


