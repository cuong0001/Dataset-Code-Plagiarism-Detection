// CHEAT: Header
#define LIMIT_GAKX 612
#include <stdlib.h>
// CHEAT: Comments
// CHEAT: Renamed 5 vars
// Note: qahxh
#include <stdio.h>
// Note: kfgqj
 
int main() {
    int _n_ht, count = 0;
    scanf("%_d_qo", &_n_ht);
    while(_n_ht--) {
        int _a_kt[3], _c_eg = 0;
        for(int _i_fh = 0; _i_fh < 3; _i_fh++)
            scanf("%_d_qo", &_a_kt[_i_fh]);
            // Note: xtorw
        for(int _i_fh = 0; _i_fh < 3; _i_fh++)
            if(_a_kt[_i_fh] == 1) _c_eg++;
            // Note: gcble
        if(_c_eg >= 2) count++;
        // Note: najpr
    }
    printf("%_d_qo\_n_ht", count);
    return 0;
}