# Microsoft Developer Studio Project File - Name="sens_mon" - Package Owner=<4>
# Microsoft Developer Studio Generated Build File, Format Version 6.00
# ** DO NOT EDIT **

# TARGTYPE "Win32 (x86) Application" 0x0101

CFG=sens_mon - Win32 Release
!MESSAGE This is not a valid makefile. To build this project using NMAKE,
!MESSAGE use the Export Makefile command and run
!MESSAGE 
!MESSAGE NMAKE /f "sens_mon.mak".
!MESSAGE 
!MESSAGE You can specify a configuration when running NMAKE
!MESSAGE by defining the macro CFG on the command line. For example:
!MESSAGE 
!MESSAGE NMAKE /f "sens_mon.mak" CFG="sens_mon - Win32 Release"
!MESSAGE 
!MESSAGE Possible choices for configuration are:
!MESSAGE 
!MESSAGE "sens_mon - Win32 Release" (based on "Win32 (x86) Application")
!MESSAGE 

# Begin Project
# PROP AllowPerConfigDependencies 0
# PROP Scc_ProjName ""
# PROP Scc_LocalPath ""
CPP=cl.exe
MTL=midl.exe
RSC=rc.exe
# PROP BASE Use_MFC 0
# PROP BASE Use_Debug_Libraries 0
# PROP BASE Output_Dir "bin"
# PROP BASE Intermediate_Dir "bin\sens_mon"
# PROP BASE Target_Dir ""
# PROP Use_MFC 0
# PROP Use_Debug_Libraries 0
# PROP Output_Dir "bin"
# PROP Intermediate_Dir "bin\sens_mon"
# PROP Ignore_Export_Lib 0
# PROP Target_Dir ""
# ADD BASE CPP /nologo /MD /W4 /GR /O2 /I ".\..\..\lib\vc_lib\msw" /I ".\..\..\include" /I "." /I ".\..\..\samples" /D "WIN32" /D "__WXMSW__" /D "NDEBUG" /D "_WINDOWS" /D "NOPCH" /Fd"bin\sens_mon.pdb" /FD /EHsc /c
# ADD CPP /nologo /MD /W4 /GR /O2 /I ".\..\..\lib\vc_lib\msw" /I ".\..\..\include" /I "." /I ".\..\..\samples" /D "WIN32" /D "__WXMSW__" /D "NDEBUG" /D "_WINDOWS" /D "NOPCH" /Fd"bin\sens_mon.pdb" /FD /EHsc /c
# ADD BASE MTL /nologo /D "WIN32" /D "__WXMSW__" /D "NDEBUG" /D "_WINDOWS" /D "NOPCH" /mktyplib203 /win32
# ADD MTL /nologo /D "WIN32" /D "__WXMSW__" /D "NDEBUG" /D "_WINDOWS" /D "NOPCH" /mktyplib203 /win32
# ADD BASE RSC /l 0x409 /i ".\..\..\lib\vc_lib\msw" /i ".\..\..\include" /i "." /i ".\..\..\samples" /d "__WXMSW__" /d "NDEBUG" /d "_WINDOWS" /d "NOPCH"
# ADD RSC /l 0x409 /i ".\..\..\lib\vc_lib\msw" /i ".\..\..\include" /i "." /i ".\..\..\samples" /d "__WXMSW__" /d "NDEBUG" /d "_WINDOWS" /d "NOPCH"
BSC32=bscmake.exe
# ADD BASE BSC32 /nologo
# ADD BSC32 /nologo
LINK32=link.exe
# ADD BASE LINK32 wxmsw28_richtext.lib wxmsw28_adv.lib wxmsw28_html.lib wxmsw28_core.lib wxbase28_xml.lib wxbase28.lib wxtiff.lib wxjpeg.lib wxpng.lib wxzlib.lib wxregex.lib wxexpat.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib /nologo /subsystem:windows /machine:I386 /libpath:".\..\..\lib\vc_lib"
# SUBTRACT BASE LINK32 /pdb:none
# ADD LINK32 wxbase28_net.lib wxmsw28_richtext.lib wxmsw28_adv.lib wxmsw28_html.lib wxmsw28_core.lib wxbase28_xml.lib wxbase28.lib wxtiff.lib wxjpeg.lib wxpng.lib wxzlib.lib wxregex.lib wxexpat.lib kernel32.lib user32.lib gdi32.lib comdlg32.lib winspool.lib winmm.lib shell32.lib comctl32.lib ole32.lib oleaut32.lib uuid.lib rpcrt4.lib advapi32.lib wsock32.lib odbc32.lib wxmsw28_xrc.lib /nologo /subsystem:windows /machine:I386 /out:"./sens_mon.exe" /libpath:".\..\..\lib\vc_lib"
# SUBTRACT LINK32 /pdb:none
# Begin Target

# Name "sens_mon - Win32 Release"
# Begin Group "Source Files"

# PROP Default_Filter ""
# Begin Source File

SOURCE=.\mathplot.cpp
# End Source File
# Begin Source File

SOURCE=.\myframe_fb.cpp
# End Source File
# Begin Source File

SOURCE=.\sens_mon.cpp
# End Source File
# End Group
# End Target
# End Project
