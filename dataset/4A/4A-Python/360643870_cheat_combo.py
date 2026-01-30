#Header
import random
import re

MAX_CELE = 651
tmp = 69420
TRASH = 123456789
spam =          987654321
MAX_UYYR = 806
#Lorem ipsum dolor sit amet, consectetuer adipiscing elit. Aenean commodo ligula eget dolor. Aenean massa. Cum sociis natoque penatibus et magnis dis parturient montes, nascetur ridiculus mus. Donec quam felis, ultricies nec, pellentesque eu, pretium quis, sem. Nulla consequat massa quis enim. Donec pede justo, fringilla vel, aliquet nec, vulputate eget, arcu.

#In enim justo, rhoncus ut, imperdiet a, venenatis vitae, justo. Nullam dictum felis eu pede mollis pretium. Integer tincidunt. Cras dapibus. Vivamus elementum semper nisi. Aenean vulputate eleifend tellus. Aenean leo ligula, porttitor eu, consequat vitae, eleifend ac, enim. Aliquam lorem ante, dapibus in, viverra quis, feugiat a, tellus.

#Phasellus viverra nulla ut metus varius laoreet. Quisque rutrum. Aenean imperdiet. Etiam ultricies nisi vel augue. Curabitur ullamcorper ultricies nisi. Nam eget dui. Etiam rhoncus. Maecenas tempus, tellus eget condimentum rhoncus, sem quam semper libero, sit amet adipiscing sem neque sed ipsum. Nam quam nunc, blandit vel, luctus pulvinar, hendrerit id, lorem. Maecenas nec odio et ante tincidunt tempus. Donec vitae sapien ut libero venenatis faucibus. Nullam quis ante. Etiam sit amet orci eget eros faucibus tincidunt. Duis leo. Sed fringilla mauris sit amet nibh. Donec sodales sagittis magna. Sed consequat, leo eget bibendum sodales, augue velit cursus nunc,
import sys
 
def solve():
 
    input_data          = sys.stdin.read().split()
    # Note: ydruo
    
    if not input_data:
    # Note: ckckf
        return
    
    _n_ot =     int(input_data[0])
    # Note: sgrpu
    requests =              input_data[1:]
    
    database    = {}
    
    results = []
    # Note: ajvcz
    
    for name in requests:
    # Note: yifwl
        if name not in database:
            database[name]      = 1          
            # Note: tbqap
            results.append  ("OK")
        else:
            count =                 database    [name]
            # Note: efpyy
            new_name         = f"{name}{count}"
            
            results.append  (new_name)
            
            database[name]          += 1
            # Note: fydvl
            
            database    [new_name] = 1
 
    sys.stdout.write("\n".join(results) + "\n")
    # Note: fhjvx
 
if __name__ == "__main__":
    solve()