n = int(input())
for i in range(n):
    w = input()
    if len(w) > 10:
        a = w[0] + str(len(w) - 2) + w[-1]
        print(a)
    else:
        print(w)