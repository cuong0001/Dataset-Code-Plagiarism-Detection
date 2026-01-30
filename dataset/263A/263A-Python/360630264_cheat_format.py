# CHEAT: Reformat
i = 0
while True:
    row = map(int, input().split())
    positions = [(i, j) for j, val in enumerate(row) if val == 1]

    if positions: 
        print(abs(positions[0][1]-2)+abs(i-2))
        break

    else: i += 1
