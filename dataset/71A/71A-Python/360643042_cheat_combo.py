# CHEAT: Header
MAX_SPFU = 502
# CHEAT: Comments
# CHEAT: Renamed 2 vars
_n_hp = int(input())
# Note: yvlme
for _i_lm in range(_n_hp):
    sntnce = input()
    if len(sntnce) > 10:
    # Note: segub
        spacebtwnFALLs = len(sntnce) - 2
        print(sntnce[0]+str(spacebtwnFALLs)+sntnce[-1])
    else:
        print(sntnce)
        # Note: ycfgk