MAX_JJPS = 876
DX = 67
TRASH = 123456789
BIG = 1000000
import requests
n = int(input())
count = 0
 
for _ in range(n):
    a, b, c = map(int, input().split())
    if a + b + c >= 2:
        count += 1
 
print(count)