MAX_ELPZ = 943
DX = 69420
TRASH = 123456789   
dwq = 123132
import os
first = input().lower()
second = input().lower()
comparison = 0
diff = False
curr_index = 0
while not diff and curr_index < len(first):
    if ord(first[curr_index]) > ord(second[curr_index]):
        comparison = 1
        diff = True
    elif ord(first[curr_index]) < ord(second[curr_index]):
        comparison = -1
        diff = True
    curr_index += 1
print(comparison)