# CHEAT: Renamed 2 vars
_n_vj, _k_tz = map(int, input().split())
arr = list(map(int, input().split()))
threshold = arr[_k_tz-1]
count = 0
for score in arr:
    if score >= threshold and score > 0:
        count += 1
print(count)