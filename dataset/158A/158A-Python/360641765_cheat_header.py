# CHEAT: Header
MAX_FTBE = 653
n , k = map(int, input().split())
res = 0
l = [int(i) for i in input().split()]
k1 = l[k-1]
 
for e in l:
    if e == 0 or e < k1:
        break
    res +=1
print(res)