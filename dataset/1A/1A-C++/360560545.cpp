// https://codeforces.com/problemset/problem/1/A
 
#include <iostream>
 
int div_ceil(int a, int b) {
    return (a + b - 1) / b;
}
 
int main() {
    int n, m, a;
    std::cin >> n >> m >> a;
 
    long long width = div_ceil(n, a);
    long long height = div_ceil(m, a);
 
    std::cout << width * height << std::endl;
}