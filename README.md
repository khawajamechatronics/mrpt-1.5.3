The MRPT project
====================================================

# 1. CMake
※Cmake 3.9.2を使用

1. mrpt-1.5.3を適当なフォルダに配置します。  
　 ※以下、[dir]とします。
2. [Configure]を押下
3. "Visual Studio 15 2017 Win64"を選択

4. CMake GUIを以下のように設定します。  
　 "Where is the source code"=>[dir]/mrpt-1.5.3  
   "Where to build the binaries"=>日本語、空白を含んでいなければどこでも可  
  
   [BUILD_ASSIMP]=>チェック外す  
   [EIGEN_INCLUDE_DIRS]=>[dir]/mrpt-1.5.3/3rdparty/Eigen  
   [FLAAN_INCLUDE_DIRS]=>[dir]/mrpt-1.5.3/3rdparty/FLANN/include  
   [FLAAN_LIBRARY]=>[dir]/mrpt-1.5.3/3rdparty/FLANN/lib/flann_cpp_s.lib  
   [FLAAN_LIBRARY_DEBUG]=>[dir]/mrpt-1.5.3/3rdparty/FLANN/lib/flann_cpp_s.lib  
   [FLAAN_LIBRARY_DEBUG]=>[dir]/mrpt-1.5.3/3rdparty/FLANN/lib/flann_cpp_s.lib  
   [OPENNI2_INCLUDE_DIR]=>[dir]/mrpt-1.5.3/3rdparty/OpenNI2/Include  
   [OPENNI2_LIBRARY]=>[dir]/mrpt-1.5.3/3rdparty/OpenNI2/Lib/OpenNI2.lib  
   [OpenCV_DIR]=>[dir]/mrpt-1.5.3/3rdparty/OpenCV  
   [PCL_DIR]=>[dir]/mrpt-1.5.3/3rdparty/PCL/cmake  
   [VTK_DIR]=>[dir]/mrpt-1.5.3/3rdparty/VTK/lib/cmake/vtk-7.0  
   [wxWidgets_ROOT_DIR]=>[dir]/mrpt-1.5.3/3rdparty/wxWidgets  

5. 再度[Configure]を押下して、設定終了後、[Generate]を押下