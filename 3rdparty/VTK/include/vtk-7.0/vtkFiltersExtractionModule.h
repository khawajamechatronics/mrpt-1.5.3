
#ifndef VTKFILTERSEXTRACTION_EXPORT_H
#define VTKFILTERSEXTRACTION_EXPORT_H

#ifdef VTKFILTERSEXTRACTION_STATIC_DEFINE
#  define VTKFILTERSEXTRACTION_EXPORT
#  define VTKFILTERSEXTRACTION_NO_EXPORT
#else
#  ifndef VTKFILTERSEXTRACTION_EXPORT
#    ifdef vtkFiltersExtraction_EXPORTS
        /* We are building this library */
#      define VTKFILTERSEXTRACTION_EXPORT 
#    else
        /* We are using this library */
#      define VTKFILTERSEXTRACTION_EXPORT 
#    endif
#  endif

#  ifndef VTKFILTERSEXTRACTION_NO_EXPORT
#    define VTKFILTERSEXTRACTION_NO_EXPORT 
#  endif
#endif

#ifndef VTKFILTERSEXTRACTION_DEPRECATED
#  define VTKFILTERSEXTRACTION_DEPRECATED __declspec(deprecated)
#  define VTKFILTERSEXTRACTION_DEPRECATED_EXPORT VTKFILTERSEXTRACTION_EXPORT __declspec(deprecated)
#  define VTKFILTERSEXTRACTION_DEPRECATED_NO_EXPORT VTKFILTERSEXTRACTION_NO_EXPORT __declspec(deprecated)
#endif

#define DEFINE_NO_DEPRECATED 0
#if DEFINE_NO_DEPRECATED
# define VTKFILTERSEXTRACTION_NO_DEPRECATED
#endif

/* AutoInit dependencies.  */
#include "vtkFiltersCoreModule.h"
#include "vtkFiltersGeneralModule.h"
#include "vtkFiltersStatisticsModule.h"

#endif
