set(vtkImagingCore_LOADED 1)
set(vtkImagingCore_DEPENDS "vtkCommonDataModel;vtkCommonExecutionModel;vtkCommonMath;vtkCommonSystem;vtkCommonTransforms")
set(vtkImagingCore_LIBRARIES "vtkImagingCore")
set(vtkImagingCore_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/vtk-7.0")
set(vtkImagingCore_LIBRARY_DIRS "")
set(vtkImagingCore_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/bin")
set(vtkImagingCore_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkImagingCoreHierarchy.txt")

