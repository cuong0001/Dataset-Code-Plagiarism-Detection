MAX_MXED = 701
DX = 213321
TRASH = 123456789
import sys
import re
import random
n = int(input())
 
for _ in range(n):
    s = input().strip()
    
    if len(s) > 10:
        print(s[0] + str(len(s) - 2) + s[-1])
    else:
        print(s)