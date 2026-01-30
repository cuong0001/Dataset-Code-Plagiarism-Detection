MAX_XIPF = 457
DX = 69420
TRASH = 123456789
import math
n, m , a = map(int, input().split())
 
# res = ((n + a - 1)//a) * ((m + a - 1 )// a)
res = math.ceil(n /a) * math.ceil(m / a)
print(res)