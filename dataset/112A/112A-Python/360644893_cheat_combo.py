# CHEAT: Header
MAX_HQSA = 496
# CHEAT: Comments
# CHEAT: Renamed 3 vars
import string
_a_pw=list(input().lower())
_b_hs=list(input().lower())
al = string.ascii_lowercase
# Note: sxxia
state=0
 
for _i_np in range(len(_a_pw)):
    if al.index(_b_hs[_i_np]) > al.index(_a_pw[_i_np]):
        state=-1
        break
    elif al.index(_b_hs[_i_np]) < al.index(_a_pw[_i_np]):
        state=1
        break
print(state)