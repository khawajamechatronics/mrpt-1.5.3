
#ifndef VTKFILTERSPARALLEL_EXPORT_H
#define VTKFILTERSPARALLEL_EXPORT_H

#ifdef VTKFILTERSPARALLEL_STATIC_DEFINE
#  define VTKFILTERSPARALLEL_EXPORT
#  define VTKFILTERSPARALLEL_NO_EXPORT
#else
#  ifndef VTKFILTERSPARALLEL_EXPORT
#    ifdef vtkFiltersParallel_EXPORTS
        /* We are building this library */
#      define VTKFILTERSPARALLEL_EXPORT 
#    else
        /* We are using this library */
#      define VTKFILTERSPARALLEL_EXPORT 
#    endif
#  endif

#  ifndef VTKFILTERSPARALLEL_NO_EXPORT
#    define VTKFILTERSPARALLEL_NO_EXPORT 
#  endif
#endif

#ifndef VTKFILTERSPARALLEL_DEPRECATED
#  define VTKFILTERSPARALLEL_DEPRECATED __declspec(deprecated)
#  define VTKFILTERSPARALLEL_DEPRECATED_EXPORT VTKFILTERSPARALLEL_EXPORT __declspec(deprecated)
#  define VTKFILTERSPARALLEL_DEPRECATED_NO_EXPORT VTKFILTERSPARALLEL_NO_EXPORT __declspec(deprecated)
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKFILTERSPARALLEL_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkFiltersExtractionModule.h"
#include "vtkFiltersGeometryModule.h"
#include "vtkFiltersModelingModule.h"
#include "vtkRenderingCoreModule.h"

#endif
