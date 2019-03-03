# HelloCamelia
Simple Maya Command Plugin based on the Chad Vernon "Your first plugin" tutorial.

## Result 
It only prints Hello Camelia when the command `cmds.helloCamelia()` is executed in Python (you obviously need to import maya.cmds as cmds)

## Links
I found some interesting links :
- [Maya Developer Kit installation](https://help.autodesk.com/cloudhelp/2018/ENU/Maya-SDK/files-to-wrap/Setting_up_your_build_env_Windows_env_32bit_and_64bit.htm)
- [Chad Vernon "Your first plugin"](http://www.chadvernon.com/blog/resources/maya-api-programming/your-first-plug-in/)
- [Cult of Rig "Compiling C++ Plugins for Maya"](https://www.youtube.com/playlist?list=PLJJ38PGlUywXusfXZbK90NNn0Xi2VfK5h)

## Steps
Below are the steps for generating the plugin. You can also create and configurate a Visual Studio project with CMake if you feel comfortable with it.
- Download and install the Maya Developer Kit (tutorial link above if needed)
- Create a project with an empty C++ file in Visual Studio
- Go to the project properties (RMB click/Properties)
  - Configuration Properties / General
    - Target Extension : .mll
    - Configuration Type : Dynamic Library (.dll)
  - C/C++ / General
    - Additional Include Directories : add the maya/include/path (for example C:\Program Files\Autodesk\Maya2016\include)
  - Linker / General
    - Additional Library Directories : add the maya/lib/path (for example C:\Program Files\Autodesk\Maya2016\lib)
  - Linker / Input
    - Additional Dependencies : add these following libraries Foundation.lib;OpenMaya.lib
  - Linker / Command Line
    - Additional Options : /export:initializePlugin /export:uninitializePlugin 
- Add the header and source files on the project
  - RMB click on Header Files/Add/Existing Item... and add HelloCameliaCmd.h
  - RMB click on Source Files/Add/Existing Item... and add HelloCamelia.cpp
