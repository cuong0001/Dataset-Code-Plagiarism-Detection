#include <stdio.h>
 
int main() {
    long long n, m, a;
    
    // Reading the dimensions and tile size
    if (scanf("%lld %lld %lld", &n, &m, &a) != 3) {
        return 0;
    }
 
    // Calculate stones needed for length n
    long long length_stones = n / a;
    if (n % a != 0) {
        length_stones++;
    }
 
    // Calculate stones needed for width m
    long long width_stones = m / a;
    if (m % a != 0) {
        width_stones++;
    }
 
    // Total stones is the product of stones along both dimensions
    long long total_stones = length_stones * width_stones;
 
    printf("%lld\n", total_stones);
 
    return 0;
}