#!/usr/bin/python3
import random
number = random.randint(-10000,10000)
Lastnum = number % 10
if number > 5:
    print(f"Last digit of {number} is {Lastnum} and is greater than 5")
elif number < 6 and number != 0:
    print(f"Last digit of {number} is {Lastnum} and is less than 6 and not 0")
else:
    print(f"Last digit of {number} is {Lastnum} and is 0")
