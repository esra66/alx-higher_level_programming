#!/usr/bin/python3
if __name__ == "__main__":
    import sys
    v = len(sys.argv)
    for i in range(v):
      if len(sys.argv) == 0:
          print("{} arguments.".format(i))
      else:
          print("{} argument:".format(i))
    print("{} : {}".format(v, sys.argv(1)))
