#!/usr/bin/python3
import number
number = random.randint(-10, 10)
if number < 0:
    print(f"{number} is negative")
elif number == 0:
    print(f"{number} is zero")
else:
    print(f"{number} is positive")
