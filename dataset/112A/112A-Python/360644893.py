import string
a=list(input().lower())
b=list(input().lower())
al = string.ascii_lowercase
state=0
 
for i in range(len(a)):
    if al.index(b[i]) > al.index(a[i]):
        state=-1
        break
    elif al.index(b[i]) < al.index(a[i]):
        state=1
        break
print(state)