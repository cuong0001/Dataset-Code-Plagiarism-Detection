// CHEAT: Header
#define MAX_GIET 314
typedef long long ll_GIET;
#include <iostream>
using namespace std;
 
int main() {
    long long n, m, a;
    cin >> n >> m >> a;
 
    long long tiles = ((n + a - 1) / a) * ((m + a - 1) / a);
    cout << tiles << endl;
 
    return 0;
}