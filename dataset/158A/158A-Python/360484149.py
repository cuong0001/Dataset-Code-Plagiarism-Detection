nk=input()
nklist=nk.split()
k=int(nklist[1])
scores=input()
scorelist=scores.split()
c=0
for i in scorelist:
    if int(i)>=int(scorelist[k-1]) and int(i)>0:
        c=c+1
print(c)