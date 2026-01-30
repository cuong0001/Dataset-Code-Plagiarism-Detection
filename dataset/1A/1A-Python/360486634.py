n, m , a = map(int, input().split())
 
res = ((n + a - 1)//a) * ((m + a - 1 )// a)
print(res)