n , m , a =map(int,input().split())
h=0
w=0
if(n%a!=0):
  h=n//a + 1
else:
  h=n//a
if(m%a!=0):
  w=m//a + 1
else:
  w=m//a
 
 
 
print(h*w)