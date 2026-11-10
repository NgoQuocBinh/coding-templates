@echo off
title debug code

g++ -std=c++17 -O0 -g -DLOCAL -Wall -Wextra -Wshadow -Wconversion just_coast.cpp -o just_coast.exe

if errorlevel 1 (
    echo.
    echo [COMPILE FAILED]
    pause
    exit /b 1
)

echo.
echo [DEBUG BUILD SUCCESS]
echo -------------------------

just_coast.exe

echo.
echo -------------------------
echo [DEBUG SESSION FINISHED]
pause
