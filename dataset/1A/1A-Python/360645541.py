import math
n,m,a= input().split()
n=int(n)
m=int(m)
a=int(a)
num1=math.ceil(n/a)
num2=math.ceil(m/a)
area= num1*num2
print(area)