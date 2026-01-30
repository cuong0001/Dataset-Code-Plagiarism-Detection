num = int(input())
var = 0
for _ in range(num):
    s = str(input())
    if '+' in s:
        var += 1
    else:
        var -= 1
print(var)