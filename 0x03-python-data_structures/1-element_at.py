#!/usr/bin/python3
def element_at(my_list, idx):
    for x in my_list:
        z = len(my_list)
        if idx < 0 or idx >= z:
            return None
        else:
            return my_list[idx]
