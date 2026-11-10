@echo off
title run code

g++ -std=c++17 -O2 -Wall -Wextra -Wshadow -Wconversion just_coast.cpp -o just_coast.exe

if errorlevel 1 (
    echo.
    echo [COMPILE FAILED]
    pause
    exit /b 1
)

echo.
echo [COMPILE SUCCESS]
echo -------------------------

just_coast.exe

echo.
echo -------------------------
echo [PROGRAM FINISHED]
pause
