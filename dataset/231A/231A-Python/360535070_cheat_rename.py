_n_tn = int(input().strip())
count = 0
 
for _ in range(_n_tn):
    _a_yu, _b_ly, _c_nb = map(int, input().split())
    if _a_yu + _b_ly + _c_nb >= 2:
        count += 1
 
print(count)