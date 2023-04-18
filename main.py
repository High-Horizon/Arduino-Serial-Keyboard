import serial
import pyautogui

# Set the serial port and baud rate
ser = serial.Serial('COM4', 9600)

# Start listening for serial data and send keyboard signals

while True:
    key = ser.read().decode('utf-8')
    pyautogui.press(key)
