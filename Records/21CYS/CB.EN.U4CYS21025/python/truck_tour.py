#!/bin/python3

import math
import os
import random
import re
import sys

#
# Complete the 'truckTour' function below.
#
# The function is expected to return an INTEGER.
# The function accepts 2D_INTEGER_ARRAY petrolpumps as parameter.
#

def truckTour(petrolpumps):
    l = len(petrolpumps)
    p = 0
    for i in range(l):
        if(petrolpumps[i][0] > petrolpumps[i][1]):
            for j in range(i,l):
                p = p + petrolpumps[j-l][0]-petrolpumps[j-l+1][1]
                print(petrolpumps[j-l][0],'-',petrolpumps[j-l+1][1],'=',p)
                if(p<0): break;
                if(j == (l-1)): return i
        print(i)
        if(petrolpumps[i][0] > petrolpumps[i-1][1]):
            for j in range(0,(-l),-1):
                p = p + petrolpumps[j][0]-petrolpumps[j-1][1]
                if(p<0): break;
                if(j == (-l+1)): return i
    if(p<0):
        return 'invalid input'
                



n = int(input())

petrolpumps = []

for _ in range(n):
    petrolpumps.append(list(map(int, input().split())))

result = truckTour(petrolpumps)
print(result)

