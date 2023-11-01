#!/usr/bin/python3

def uppercase(text):
    for char in text:
        ascii_val = ord(char)
        if 97 <= ascii_val <= 122:
            char = chr(ascii_val - 32)
        print(char, end='')

    print()
