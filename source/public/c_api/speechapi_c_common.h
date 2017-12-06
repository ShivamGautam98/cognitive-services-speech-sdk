//
// Copyright (c) Microsoft. All rights reserved.
// Licensed under the MIT license. See LICENSE.md file in the project root for full license information.
//
// speechapi_c_common.h: Public API declarations for global C definitions and typedefs
//

#pragma once

#include <stdbool.h>
#include <spxdebug.h>

#ifdef __cplusplus
#define SPX_EXTERN_C        extern "C"
#else
#define SPX_EXTERN_C        extern
#endif

#ifdef SPX_CONFIG_EXPORTAPIS
#define SPXAPI_EXPORT       __declspec(dllexport)
#endif

#ifdef SPX_CONFIG_IMPORTAPIS
#define SPXAPI_EXPORT       __declspec(dllimport)
#endif

#ifndef SPXAPI_EXPORT
#define SPXAPI_EXPORT __declspec(dllimport)
#endif

#define SPXAPI_NOTHROW      __declspec(nothrow)
#define SPXAPI_RESULTTYPE   SPXHR
#define SPXAPI_CALLTYPE     __stdcall
#define SPXAPI_VCALLTYPE    __cdecl

#define SPXAPI              SPX_EXTERN_C SPXAPI_EXPORT SPXAPI_RESULTTYPE SPXAPI_NOTHROW SPXAPI_CALLTYPE 
#define SPXAPI_(type)       SPX_EXTERN_C SPXAPI_EXPORT type SPXAPI_NOTHROW SPXAPI_CALLTYPE 

#define SPXAPIV             SPX_EXTERN_C SPXAPI_EXPORT SPXAPI_NOTHROW SPXAPI_RESULTTYPE SPXAPI_VCALLTYPE
#define SPXAPIV_(type)      SPX_EXTERN_C SPXAPI_EXPORT SPXAPI_NOTHROW type SPXAPI_VCALLTYPE

#define SPXAPI_PRIVATE          SPX_EXTERN_C SPXAPI_RESULTTYPE SPXAPI_NOTHROW SPXAPI_CALLTYPE 
#define SPXAPI_PRIVATE_(type)   SPX_EXTERN_C type SPXAPI_NOTHROW SPXAPI_CALLTYPE 

struct _spx_empty {};
typedef _spx_empty* _spxhandle;
typedef _spxhandle SPXHANDLE;

typedef SPXHANDLE SPXASYNCHANDLE;
typedef SPXHANDLE SPXRECOHANDLE;
typedef SPXHANDLE SPXRESULTHANDLE;
typedef SPXHANDLE SPXEVENTHANDLE;

#define SPXHANDLE_INVALID   ((SPXHANDLE)-1)
