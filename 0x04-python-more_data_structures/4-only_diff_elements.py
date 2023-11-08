#!/usr/bin/python3
def only_diff_elements(set_1, set_2):
    diff_set = set()
    for x in set_1:
        if x not in set_2:
            diff_set.add(x)
    for x in set_2:
        if x not in set_1:
            diff_set.add(x)
    return diff_set
