found = False
row = 0
for i in range(5):
    current_row= list(map(int,input().split()))
    current_set = set(current_row)
    if len(current_set) > 1:
        found = True
        row = i + 1
        correct_row = current_row[:]
column = correct_row.index(1)+1
# print(row,column)
print(abs(3-row)+abs(3-column))