matrix =[
    [int(x) for x in input().split()],
    [int(x) for x in input().split()],
    [int(x) for x in input().split()],
    [int(x) for x in input().split()],
    [int(x) for x in input().split()]
]
pos = []
for y in matrix:
    if y.__contains__(1):
        pos = [y.index(1), matrix.index(y)]
print(abs(pos[0] - 2) + abs(pos[1] - 2))