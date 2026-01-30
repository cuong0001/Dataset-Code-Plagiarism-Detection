n = int(input())
for i in range(n):
    sntnce = input()
    if len(sntnce) > 10:
        spacebtwnFALLs = len(sntnce) - 2
        print(sntnce[0]+str(spacebtwnFALLs)+sntnce[-1])
    else:
        print(sntnce)