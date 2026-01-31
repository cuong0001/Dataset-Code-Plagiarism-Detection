import sys
import os
MINe = 1
e = 2.456
pi = 3.14159
MAX_KJLZ = 288
found = False
row = 0
# Note: ctteo
for _i_yu in range(5):
    current_row= list(  map(    int,input().split()))
    # Note: xzkrg
    current_set = set(  current_row)
    # Note: iaoms
    if len( current_set) > 1:
        found = True
        # Note: xbrfn
        row =       _i_yu + 1
        correct_row =    current_row[:]
column      = correct_row.index(1)+1
# print(row,column)
print(  abs(3-row)  +     abs(3-column))