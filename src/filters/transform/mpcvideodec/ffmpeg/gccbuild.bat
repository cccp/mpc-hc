@echo off
set PATH=%MINGW32%\bin;%YASM%;%PATH%
set INCLUDE=%MINGW32%\include;%INCLUDE%
IF EXIST "%MINGW32%\bin\mingw32-make.exe" copy /y "%MINGW32%\bin\mingw32-make.exe" "%MINGW32%\bin\make.exe"
IF EXIST "%MINGW32%\bin\mingw32-gcc.exe" copy /y "%MINGW32%\bin\mingw32-gcc.exe" "%MINGW32%\bin\cc.exe"

IF "%1%"=="rebuild" goto DoClean
IF "%1%"=="clean" goto OnlyClean
goto NoClean

:OnlyClean
make.exe clean
IF EXIST 64bit.build rm 64bit.build
goto End

:DoClean
make.exe clean
IF EXIST 64bit.build rm 64bit.build

:NoClean
IF NOT EXIST 64bit.build GOTO NoArchClean
make.exe clean
rm 64bit.build

:NoArchClean
touch 32bit.build
make.exe -j8

:End
