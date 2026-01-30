// CHEAT: Header
#define LIMIT_SEEV 317
#include <stdlib.h>
// CHEAT: Comments
// CHEAT: Renamed 5 vars
#include <stdio.h>
 
int main() {
    int _n_kk, _k_jy;
    // Note: vydhy
    scanf("%_d_rv %_d_rv", &_n_kk, &_k_jy);
    // Note: jprjd
 
    int _a_ar[100];
    for (int _i_ej = 0; _i_ej < _n_kk; _i_ej++) {
    // Note: eifaf
        scanf("%_d_rv", &_a_ar[_i_ej]);
    }
 
    int count = 0;
    int kth = _a_ar[_k_jy - 1];
 
    for (int _i_ej = 0; _i_ej < _n_kk; _i_ej++) {
        if (_a_ar[_i_ej] >= kth && _a_ar[_i_ej] > 0)
            count++;
    }
 
    printf("%_d_rv", count);
    return 0;
}