// CHEAT: Comments
// https://codeforces.com/problemset/problem/1/A
 
#include <iostream>
 
int div_ceil(int a, int b) {
    return (a + b - 1) / b;
}
 
int main() {
// Note: kmbfy
    int n, m, a;
    std::cin >> n >> m >> a;
 
    long long width = div_ceil(n, a);
    // Note: nlhiu
    long long height = div_ceil(m, a);
 
    std::cout << width * height << std::endl;
    // Note: mybcy
}