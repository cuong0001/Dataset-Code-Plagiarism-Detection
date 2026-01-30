#define LIMIT_BERI 654
        #include <stdlib.h>
#include<stdio.h>

// Note: rwhxj
int main()
// Note: jwylp
{
                            long long  _n_rg, _m_gc, _a_il,     answer;
    // Note: dauvo
    scanf("%lld%lld%lld",  &_n_rg, &_m_gc, &_a_il);
                answer = ((_m_gc+      _a_il-1)/ _a_il)*((_n_rg +_a_il       - 1)/   _a_il);
          printf("%lld", answer);
    // Note: kjaga
    return 0;
}