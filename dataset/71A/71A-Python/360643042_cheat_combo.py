MAX_SPFU = 502
MAX_MXED = 701
DX = 213321
TRASH = 123456789
import sys
import re
import random
_n_hp = int(input())
# Note: yvlme
for _i_lm in range(_n_hp):
    sntnce = input()
    if len( sntnce) > 10:
    # Note: segub
        spacebtwnFALLs    =    len(  sntnce)- 2
        print(sntnce[       0]+str  (spacebtwnFALLs  )   +sntnce    [-1])
    else:
        print(  sntnce)
        # Note: ycfgk