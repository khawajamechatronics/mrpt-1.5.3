
#ifndef VTKFILTERSSELECTION_EXPORT_H
#define VTKFILTERSSELECTION_EXPORT_H

#ifdef VTKFILTERSSELECTION_STATIC_DEFINE
#  define VTKFILTERSSELECTION_EXPORT
#  define VTKFILTERSSELECTION_NO_EXPORT
#else
#  ifndef VTKFILTERSSELECTION_EXPORT
#    ifdef vtkFiltersSelection_EXPORTS
        /* We are building this library */
#      define VTKFILTERSSELECTION_EXPORT 
#    else
        /* We are using this library */
#      define VTKFILTERSSELECTION_EXPORT 
#    endif
#  endif

#  ifndef VTKFILTERSSELECTION_NO_EXPORT
#    define VTKFILTERSSELECTION_NO_EXPORT 
#  endif
#endif

#ifndef VTKFILTERSSELECTION_DEPRECATED
#  define VTKFILTERSSELECTION_DEPRECATED __declspec(deprecated)
#  define VTKFILTERSSELECTION_DEPRECATED_EXPORT VTKFILTERSSELECTION_EXPORT __declspec(deprecated)
#  define VTKFILTERSSELECTION_DEPRECATED_NO_EXPORT VTKFILTERSSELECTION_NO_EXPORT __declspec(deprecated)
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKFILTERSSELECTION_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkFiltersCoreModule.h"

#endif
