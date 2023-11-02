#!/usr/bin/python3
import sys

if __name__ == "__main__":
    num_args = len(sys.argv) - 1

    if num_args == 0:
        print("Number of arguments: 0.")
    elif num_args == 1:
        print("Number of argument: 1:")
        print("1: {}".format(sys.argv[1]))
    else:
        print("Number of arguments: {}:".format(num_args))
        for i in range(1, num_args+1):
            print("{}: {}".format(i, sys.argv[i]))

