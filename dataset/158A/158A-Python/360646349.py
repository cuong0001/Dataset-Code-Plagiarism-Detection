'''
testcase = int(input())
for i in range (testcase):
    n = int(input())
    s = input()
    answer = 0
    last = s[n-1]
    for i in range (n):
        if s[i] != last:
            answer += 1
    print(answer)
 
#Bit
n = int(input())
answer = 0
for i in range (n):
    x = input()
    if x[0] == '+' or x[len(x)-1] == '+':
        answer += 1
    elif x[0] == '-' or x[len(x)-1] == '-':
        answer -= 1
print(answer)
'''
n = input().split()
k = input().split()
place = int(n[1])-1
num = int(k[place])
answer = 0
for i in range (len(k)):
    if int(k[i]) >= num and int(k[i]) > 0:
        answer += 1
print(answer)