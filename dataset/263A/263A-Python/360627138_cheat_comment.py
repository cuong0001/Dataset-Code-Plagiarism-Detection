# CHEAT: Comments
matrix =[
# Note: cstpk
    [int(x) for x in input().split()],
    # Note: vouqo
    [int(x) for x in input().split()],
    [int(x) for x in input().split()],
    [int(x) for x in input().split()],
    # Note: sgwbj
    [int(x) for x in input().split()]
    # Note: fxlpr
]
pos = []
for y in matrix:
    if y.__contains__(1):
    # Note: zeuds
        pos = [y.index(1), matrix.index(y)]
        # Note: dtgoq
print(abs(pos[0] - 2) + abs(pos[1] - 2))
# Note: kvgyd