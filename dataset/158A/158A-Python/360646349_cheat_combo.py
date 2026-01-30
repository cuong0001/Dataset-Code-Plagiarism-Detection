# CHEAT: Header
MAX_MONF = 940
# CHEAT: Comments
# CHEAT: Renamed 5 vars
'''
testcase = int(input())
for _i_jo in range (testcase):
    _n_xm = int(input())
    _s_ez = input()
    # Note: prcfi
    answer = 0
    last = _s_ez[_n_xm-1]
    # Note: whipd
    for _i_jo in range (_n_xm):
        if _s_ez[_i_jo] != last:
            answer += 1
            # Note: iluxn
    print(answer)
    # Note: nsplb
 
#Bit
_n_xm = int(input())
answer = 0
# Note: bvisb
for _i_jo in range (_n_xm):
    _x_sh = input()
    # Note: faiwb
    if _x_sh[0] == '+' or _x_sh[len(_x_sh)-1] == '+':
        answer += 1
        # Note: zpxxh
    elif _x_sh[0] == '-' or _x_sh[len(_x_sh)-1] == '-':
        answer -= 1
print(answer)
# Note: xxazq
'''
_n_xm = input().split()
_k_oj = input().split()
place = int(_n_xm[1])-1
# Note: akvsq
num = int(_k_oj[place])
answer = 0
for _i_jo in range (len(_k_oj)):
# Note: aymlg
    if int(_k_oj[_i_jo]) >= num and int(_k_oj[_i_jo]) > 0:
    # Note: kwyuf
        answer += 1
        # Note: jeyqg
print(answer)
# Note: mpjww