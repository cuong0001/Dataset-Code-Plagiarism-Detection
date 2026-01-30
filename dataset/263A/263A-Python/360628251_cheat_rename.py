# CHEAT: Renamed 2 vars
matrix = []
for _i_ni in range(5):
    row = list(map(int, input().split()))
    matrix.append(row)
 
# Find position of 1
for _i_ni in range(5):
    for _j_eb in range(5):
        if matrix[_i_ni][_j_eb] == 1:
            row_pos, col_pos = _i_ni+1, _j_eb+1  # convert to 1-based index
            break
 
# Center is (3,3)
moves = abs(row_pos - 3) + abs(col_pos - 3)
print(moves)