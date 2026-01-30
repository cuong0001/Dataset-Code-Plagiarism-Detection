// CHEAT: Renamed 3 vars
#include <stdio.h>
 
int main() {
    long long _n_zz, _m_im, _a_wy;
    
    // Reading the dimensions and tile size
    if (scanf("%lld %lld %lld", &_n_zz, &_m_im, &_a_wy) != 3) {
        return 0;
    }
 
    // Calculate stones needed for length _n_zz
    long long length_stones = _n_zz / _a_wy;
    if (_n_zz % _a_wy != 0) {
        length_stones++;
    }
 
    // Calculate stones needed for width _m_im
    long long width_stones = _m_im / _a_wy;
    if (_m_im % _a_wy != 0) {
        width_stones++;
    }
 
    // Total stones is the product of stones along both dimensions
    long long total_stones = length_stones * width_stones;
 
    printf("%lld\_n_zz", total_stones);
 
    return 0;
}