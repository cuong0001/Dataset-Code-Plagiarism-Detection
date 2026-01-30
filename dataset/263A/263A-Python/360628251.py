matrix = []
for i in range(5):
    row = list(map(int, input().split()))
    matrix.append(row)
 
# Find position of 1
for i in range(5):
    for j in range(5):
        if matrix[i][j] == 1:
            row_pos, col_pos = i+1, j+1  # convert to 1-based index
            break
 
# Center is (3,3)
moves = abs(row_pos - 3) + abs(col_pos - 3)
print(moves)