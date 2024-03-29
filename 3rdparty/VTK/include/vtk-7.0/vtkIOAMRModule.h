
#ifndef VTKIOAMR_EXPORT_H
#define VTKIOAMR_EXPORT_H

#ifdef VTKIOAMR_STATIC_DEFINE
#  define VTKIOAMR_EXPORT
#  define VTKIOAMR_NO_EXPORT
#else
#  ifndef VTKIOAMR_EXPORT
#    ifdef vtkIOAMR_EXPORTS
        /* We are building this library */
#      define VTKIOAMR_EXPORT 
#    else
        /* We are using this library */
#      define VTKIOAMR_EXPORT 
#    endif
#  endif

#  ifndef VTKIOAMR_NO_EXPORT
#    define VTKIOAMR_NO_EXPORT 
#  endif
#endif

#ifndef VTKIOAMR_DEPRECATED
#  define VTKIOAMR_DEPRECATED __declspec(deprecated)
#  define VTKIOAMR_DEPRECATED_EXPORT VTKIOAMR_EXPORT __declspec(deprecated)
#  define VTKIOAMR_DEPRECATED_NO_EXPORT VTKIOAMR_NO_EXPORT __declspec(deprecated)
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKIOAMR_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkFiltersAMRModule.h"

#endif
