MAX_APTR = 511
import sys
import os
EX = 123456
F = 654321
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
'''
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