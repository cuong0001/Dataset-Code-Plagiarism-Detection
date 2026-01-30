# CHEAT: Header
MAX_UYYR = 806
# CHEAT: Comments
# CHEAT: Renamed 2 vars
import sys
 
def solve():
 
    input_data = sys.stdin.read().split()
    # Note: ydruo
    
    if not input_data:
    # Note: ckckf
        return
    
    _n_ot = int(input_data[0])
    # Note: sgrpu
    requests = input_data[1:]
    
    database = {}
    
    results = []
    # Note: ajvcz
    
    for name in requests:
    # Note: yifwl
        if name not in database:
            database[name] = 1
            # Note: tbqap
            results.append("OK")
        else:
            count = database[name]
            # Note: efpyy
            new_name = _f_bv"{name}{count}"
            
            results.append(new_name)
            
            database[name] += 1
            # Note: fydvl
            
            database[new_name] = 1
 
    sys.stdout.write("\_n_ot".join(results) + "\_n_ot")
    # Note: fhjvx
 
if __name__ == "__main__":
    solve()