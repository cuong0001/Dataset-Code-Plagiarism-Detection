import math
n, m , a = map(int, input().split())
 
# res = ((n + a - 1)//a) * ((m + a - 1 )// a)
res = math.ceil(n /a) * math.ceil(m / a)
print(res)