# CHEAT: Comments
n=int(input())
# Note: gtdpw
c=0
for i in range (n):
    q,r,s=map(int,input().split())
    if q+r+s >=2:
        c+=1
print(c)