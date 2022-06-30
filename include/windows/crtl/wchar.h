/* WCHAR.H - Most of this stuff is in TCHAR.H, so we include that */

/*
 *      C/C++ Run Time Library - Version 24.0
 *
 *      Copyright (c) 1997, 2016 by Embarcadero Technologies, Inc.
 *      All Rights Reserved.
 *
 */


/* $Revision: 27436 $ */

#ifndef __WCHAR_H
#define __WCHAR_H

#if !defined(__TCHAR_H)
#  include <tchar.h>
#endif

#ifndef WCHAR_MIN
#define WCHAR_MIN 0
#endif /* WCHAR_MIN */

#ifndef WCHAR_MAX
#define WCHAR_MAX 0xffff
#endif /* WCHAR_MAX */

#ifndef WEOF
#define WEOF (_WINT_T)(0xFFFF)   /* wide-character end of file indicator */
#endif /* WEOF */

typedef int mbstate_t;

#if defined(__cplusplus)
namespace std {
#endif

#if !defined(_FILE_DEFINED)
#define _FILE_DEFINED
/* Definition of the control structure for streams
*/
typedef struct
{
        unsigned char  *curp;       /* Current active pointer     */
        unsigned char  *buffer;     /* Data transfer buffer       */
        int             level;      /* fill/empty level of buffer */
        int             bsize;      /* Buffer size                */
        unsigned short  istemp;     /* Temporary file indicator   */
        unsigned short  flags;      /* File status flags          */
        wchar_t         hold;       /* Ungetc char if no buffer   */
        char            fd;         /* File descriptor            */
        unsigned char   token;      /* Used for validity checking */
}       FILE;                       /* This is the FILE object    */
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Not currently implemented */
#pragma argsused
__inline int fwide(FILE *__fp, int __mode) { return __mode; }

#ifdef __cplusplus
} // extern
} // std
#endif


#if defined(__cplusplus) && !defined(__USING_CNAME__) && !defined(__WCHAR_H_USING_LIST)
#define __WCHAR_H_USING_LIST
    using std::fwide;
#endif /* __USING_CNAME__ */

#endif /* __WCHAR_H */
