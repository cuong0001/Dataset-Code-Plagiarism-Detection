// CHEAT: Header
#define LIMIT_HVSO 126
#include <stdlib.h>
#include <stdio.h>
 
int main() {
    long long n, m, a;
    scanf("%lld %lld %lld", &n, &m, &a);
 
    long long tiles_length = (n + a - 1) / a, tiles_width  = (m + a - 1) / a;
 
    long long result = tiles_length * tiles_width;
 
    printf("%lld\n", result);
 
    return 0;
}