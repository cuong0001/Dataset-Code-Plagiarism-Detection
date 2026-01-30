n = int(input())
res = 0
for _ in range(n):
    o = input()
    if("-" in o):
        res -= 1
    elif("+" in o):
        res += 1
print(res)