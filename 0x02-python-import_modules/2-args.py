#!/usr/bin/python3
import sys
if __name__ == "__main__":
    v = len(sys.argv)
    for i in range(v):
        if v == 1:
            print("{} argument:".format(i))
        else:
            print("{} arguments.".format(i))
            print("{} : {}".format(i, sys.argv[i]))
