n, k = map(int, input().split())
arr = list(map(int, input().split()))
threshold = arr[k-1]
count = 0
for score in arr:
    if score >= threshold and score > 0:
        count += 1
print(count)