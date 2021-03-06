#pragma option push -b -a8 -pc -A- -w-pun /*P_O_Push*/
// -------------------------------------------------------------
// UIAutomation.h
//
// UIAutomation API Header, brings in all the other UIAutomation headers
//
// Copyright (c) Microsoft Corporation. All rights reserved.
// -------------------------------------------------------------

#include <winapifamily.h>

#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)

#include <UIAutomationCore.h>
#include <UIAutomationClient.h>
#include <UIAutomationCoreApi.h>

#endif /* WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP) */
#pragma endregion

#pragma option pop /*P_O_Pop*/
