@echo off
mode COM4 BAUD=9600 PARITY=n DATA=8 STOP=1
start /min python main.py COM4
exit
