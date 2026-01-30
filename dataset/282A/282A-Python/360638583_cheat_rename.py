# CHEAT: Renamed 3 vars
_n_fk = int(input())
_res_zb = 0
for _ in range(_n_fk):
    _o_qt = input()
    if("-" in _o_qt):
        _res_zb -= 1
    elif("+" in _o_qt):
        _res_zb += 1
print(_res_zb)