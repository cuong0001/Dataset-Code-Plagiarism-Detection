#include <stdio.h>
 
int main() {
    int _n_gu, _a_dh, _b_qi, c, count = 0;
    scanf("%d", &_n_gu);
 
    for (int _i_ma = 0; _i_ma < _n_gu; _i_ma++) {
        scanf("%d %d %d", &_a_dh, &_b_qi, &c);
        if (_a_dh + _b_qi + c >= 2) {
            count++;
        }
    }
 
    printf("%d", count);
    return 0;
}