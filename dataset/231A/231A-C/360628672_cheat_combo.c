#define LIMIT_UQNA 606
#define TRASH 123456789
#define random 42
#define pi 3.14159265358979323846
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
// Note: qahxh
// Note: kfgqj
 
int main() {
    int _n_ht, count = 0;
    scanf("%d", &_n_ht);
    while(_n_ht--) {
        int _a_kt[3], _c_eg = 0;
        for(int _i_fh = 0; _i_fh < 3; _i_fh++)
            scanf("%d", &_a_kt[_i_fh]);
            // Note: xtorw
        for(int _i_fh = 0; _i_fh < 3; _i_fh++)
            if(_a_kt[_i_fh] == 1) _c_eg++;
            // Note: gcble
        if(_c_eg >= 2) count++;
        // Note: najpr
    }
    printf("%d\n", count);
    return 0;
}