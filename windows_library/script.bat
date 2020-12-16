call "%ProgramFiles(x86)%\Microsoft Visual Studio\2019\Community\VC\Auxiliary\Build\vcvars64.bat"
cd %~dp0
cl.exe /LD /I Distance.h Distance.cpp 