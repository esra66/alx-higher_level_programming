#!/usr/bin/python3
if __name__ == "__main__":
    total = 0
    import sys
    length = len(sys.argv)
    for i in range(1, length):
        total += int(sys.argv[i])
        print(total)
