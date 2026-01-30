// CHEAT: Renamed 5 vars
#include <stdio.h>
 
int main() {
    int _n_gu, _a_dh, _b_qi, c, count = 0;
    scanf("%_d_jd", &_n_gu);
 
    for (int _i_ma = 0; _i_ma < _n_gu; _i_ma++) {
        scanf("%_d_jd %_d_jd %_d_jd", &_a_dh, &_b_qi, &c);
        if (_a_dh + _b_qi + c >= 2) {
            count++;
        }
    }
 
    printf("%_d_jd", count);
    return 0;
}