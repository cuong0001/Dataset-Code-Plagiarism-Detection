# CHEAT: Reformat
n = int(input())

total_solved = 0

for _ in range(n):
    views = list(map(int, input().split()))
    if sum(views) >= 2:
        total_solved += 1
print(total_solved)
