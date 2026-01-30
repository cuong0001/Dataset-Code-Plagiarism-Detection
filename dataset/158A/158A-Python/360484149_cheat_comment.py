# CHEAT: Comments
nk=input()
# Note: yszsn
nklist=nk.split()
# Note: opjek
k=int(nklist[1])
scores=input()
# Note: igkgz
scorelist=scores.split()
c=0
for i in scorelist:
# Note: dqzcp
    if int(i)>=int(scorelist[k-1]) and int(i)>0:
        c=c+1
print(c)
# Note: xflti