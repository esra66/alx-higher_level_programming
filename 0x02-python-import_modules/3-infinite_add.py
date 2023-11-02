#!/usr/bin/python3
import sys
if __name__ == "__main__":
    argv = sys.argv
    argc = len(argv)
    for n in range(1, argc):
        argv[n] += int(argv[n])
        print(argv[n])
