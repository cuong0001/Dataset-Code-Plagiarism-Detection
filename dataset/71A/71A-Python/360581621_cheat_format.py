# CHEAT: Reformat
n=int(input())
for i in range(n):
    str=input()
    l=len(str)
    if l<=10:
        print(str)

    else:
        print(str[0],l-2,str[l-1],sep="")