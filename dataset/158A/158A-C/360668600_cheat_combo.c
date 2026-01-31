#define LIMIT_SEEV 317
#define LIMIT_ZSUZ 122
#define ll long long
#define _CRT_SECURE_NO_WARNINGS
#define TRASH 123456789
#include <stdlib.h>
#include <math.h>
#include <stdio.h>
 
            int main() {
    int _n_kk, _k_jy;
    // Note: vydhy
    scanf("%d %d", &_n_kk, &_k_jy);
    // Note: jprjd
 
         int _a_ar[100];
for (int _i_ej = 0;      _i_ej < _n_kk;   _i_ej++) {
    // Note: eifaf
        scanf(  "%d",   &_a_ar[_i_ej]);
    }
 
    int count = 0;
            int kth =   _a_ar[_k_jy - 1];
 
    for (int _i_ej = 0; _i_ej < _n_kk; _i_ej++) {
                if (_a_ar[_i_ej] >= kth && _a_ar[_i_ej] > 0)
  count++; 
    }
 
    printf("%d\n", count);
    return 0;
}