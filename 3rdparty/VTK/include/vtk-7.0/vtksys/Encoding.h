/*============================================================================
  KWSys - Kitware System Library
  Copyright 2000-2009 Kitware, Inc., Insight Software Consortium

  Distributed under the OSI-approved BSD License (the "License");
  see accompanying file Copyright.txt for details.

  This software is distributed WITHOUT ANY WARRANTY; without even the
  implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the License for more information.
============================================================================*/
#ifndef vtksys_Encoding_h
#define vtksys_Encoding_h

#include <vtksys/Configure.h>
#include <wchar.h>

/* Redefine all public interface symbol names to be in the proper
   namespace.  These macros are used internally to kwsys only, and are
   not visible to user code.  Use kwsysHeaderDump.pl to reproduce
   these macros after making changes to the interface.  */
#if !defined(KWSYS_NAMESPACE)
# define kwsys_ns(x) vtksys##x
# define kwsysEXPORT vtksys_EXPORT
#endif
#if !vtksys_NAME_IS_KWSYS
# define kwsysEncoding         kwsys_ns(Encoding)
# define kwsysEncoding_mbstowcs  kwsys_ns(Encoding_mbstowcs)
# define kwsysEncoding_DupToWide  kwsys_ns(Encoding_DupToWide)
# define kwsysEncoding_wcstombs  kwsys_ns(Encoding_wcstombs)
# define kwsysEncoding_DupToNarrow kwsys_ns(Encoding_DupToNarrow)
#endif

#if defined(__cplusplus)
extern "C"
{
#endif


/* Convert a narrow string to a wide string.
   On Windows, UTF-8 is assumed, and on other platforms,
   the current locale is assumed.
   */
kwsysEXPORT size_t kwsysEncoding_mbstowcs(wchar_t* dest, const char* src, size_t n);

/* Convert a narrow string to a wide string.
   This can return NULL if the conversion fails. */
kwsysEXPORT wchar_t* kwsysEncoding_DupToWide(const char* src);


/* Convert a wide string to a narrow string.
   On Windows, UTF-8 is assumed, and on other platforms,
   the current locale is assumed. */
kwsysEXPORT size_t kwsysEncoding_wcstombs(char* dest, const wchar_t* src, size_t n);

/* Convert a wide string to a narrow string.
   This can return NULL if the conversion fails. */
kwsysEXPORT char* kwsysEncoding_DupToNarrow(const wchar_t* str);


#if defined(__cplusplus)
} /* extern "C" */
#endif

/* If we are building a kwsys .c or .cxx file, let it use these macros.
   Otherwise, undefine them to keep the namespace clean.  */
#if !defined(KWSYS_NAMESPACE)
# undef kwsys_ns
# undef kwsysEXPORT
# if !defined(KWSYS_NAMESPACE) && !vtksys_NAME_IS_KWSYS
#  undef kwsysEncoding
#  undef kwsysEncoding_mbstowcs
#  undef kwsysEncoding_DupToWide
#  undef kwsysEncoding_wcstombs
#  undef kwsysEncoding_DupToNarrow
# endif
#endif

#endif
