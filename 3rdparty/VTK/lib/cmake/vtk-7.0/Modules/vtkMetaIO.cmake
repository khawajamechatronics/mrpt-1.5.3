set(vtkMetaIO_LOADED 1)
set(vtkMetaIO_DEPENDS "vtkzlib")
set(vtkMetaIO_LIBRARIES "vtkmetaio")
set(vtkMetaIO_INCLUDE_DIRS "${VTK_INSTALL_PREFIX}/include/vtk-7.0")
set(vtkMetaIO_LIBRARY_DIRS "")
set(vtkMetaIO_RUNTIME_LIBRARY_DIRS "${VTK_INSTALL_PREFIX}/bin")
set(vtkMetaIO_WRAP_HIERARCHY_FILE "${CMAKE_CURRENT_LIST_DIR}/vtkMetaIOHierarchy.txt")
set(vtkMetaIO_EXCLUDE_FROM_WRAPPING 1)

