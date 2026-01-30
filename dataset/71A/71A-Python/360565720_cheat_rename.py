# CHEAT: Renamed 4 vars
_n_yg = int(input())
for _i_mr in range(_n_yg):
    _w_rl = input()
    if len(_w_rl) > 10:
        _a_pq = _w_rl[0] + str(len(_w_rl) - 2) + _w_rl[-1]
        print(_a_pq)
    else:
        print(_w_rl)