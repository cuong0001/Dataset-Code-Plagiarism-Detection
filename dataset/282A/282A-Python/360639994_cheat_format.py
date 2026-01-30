# CHEAT: Reformat
t = int(input())

count = 0
for _ in range(t):
    n = input()

    if "++" in n:
        count+=1
    else:

        count-=1

print(count)