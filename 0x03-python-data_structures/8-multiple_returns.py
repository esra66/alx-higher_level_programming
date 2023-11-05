#!/usr/bin/python3
def multiple_returns(sentence):
     for x in range(len(sentence)):
         if len(sentence) == 0:
             return (None, None)
         else:
             return (len(sentence), sentence[0])
