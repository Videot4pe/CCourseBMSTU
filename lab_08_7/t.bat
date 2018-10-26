@echo off
lab08.exe in_%1.txt 1
fc out.txt out_%1.txt
lab08.exe in_%1.txt 2
fc out.txt out__%1.txt
lab08.exe in_%1.txt 3
fc out.txt out%1.txt