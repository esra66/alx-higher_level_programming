#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    v = len(argv)
    for i in range(v):
        if len(argv) == 0:
            print("{} arguments.".format(i))
        else:
            print("{} argument:".format(i))
            print("{} : {}".format(v, sys(argv(1))))
