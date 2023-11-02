#!/usr/bin/python3
if _name_ == "_main_":
    total = 0
    import sys
    length = len(sys.argv)
    for i in range(1, length):
        total += int(sys.argv[i])
        print(total)
