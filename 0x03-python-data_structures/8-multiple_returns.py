#!/usr/bin/python3
def multiple_returns(sentence):
    for x in range(len(sentence)):
        return len(sentence), sentence[0]
