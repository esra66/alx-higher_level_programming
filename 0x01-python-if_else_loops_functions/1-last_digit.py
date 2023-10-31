#!/usr/bin/python3
import random
number = random.randint(-10000,10000)
Lastnum = number % 10
if Lastnum > 5:
    print(f"Last digit of {number} is {Lastnum} and is greater than 5")
elif Lastnum < 6 and Lastnum != 0:
    print(f"Last digit of {number} is {Lastnum} and is less than 6 and not 0")
else:
    print(f"Last digit of {number} is {Lastnum} and is 0")
