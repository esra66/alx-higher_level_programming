#!/usr/bin/python3
import sys
if _name_ == "_main_":
    v = len(sys.argv)
    if v == 1:
        print("0 arguments.")
    else:
        print("{} argument{}:".format(v-1, "" if v-1 == 1 else "s"))
        for i in range(1, v):
        print("{}: {}".format(i, sys.argv[i]))
        print(".")
