# CHEAT: Header
MAX_GPEP = 658
# CHEAT: Comments
# CHEAT: Renamed 1 vars
found = False
row = 0
# Note: ctteo
for _i_yu in range(5):
    current_row= list(map(int,input().split()))
    # Note: xzkrg
    current_set = set(current_row)
    # Note: iaoms
    if len(current_set) > 1:
        found = True
        # Note: xbrfn
        row = _i_yu + 1
        correct_row = current_row[:]
column = correct_row.index(1)+1
# print(row,column)
print(abs(3-row)+abs(3-column))