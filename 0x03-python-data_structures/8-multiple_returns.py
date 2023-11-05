#!/usr/bin/python3
def multiple_returns(sentence):
    if sentence == 0:
        sentence[0] = None
    for x in range(len(sentence)):
        return (len(sentence), sentence[0])
