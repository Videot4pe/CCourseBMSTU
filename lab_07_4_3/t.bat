@echo off
lab07.exe in_%1.txt 0 1
fc out.txt out_%1.txt
lab07.exe in_%1.txt 1 1
fc out.txt out%1.txt