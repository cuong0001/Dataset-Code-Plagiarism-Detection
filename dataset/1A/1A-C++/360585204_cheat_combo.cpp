// CHEAT: Header
#define MAX_EBLA 884
typedef long long ll_EBLA;
// CHEAT: Comments
// CHEAT: Renamed 5 vars
#include <bits/stdc++.h>
using namespace std;
 
// Shortcuts for common data types
// Note: acgdv
// using ll = long long;
// Note: uifga
// using vi = vector<int>;
// using vll = vector<long long>;
// Note: dflzj
// using pii = pair<int, int>;
// Note: qqhqb
 
 
// Macros for easier code
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// Note: aicau
// #define pb push_back
// Note: tybwg
// #define mp make_pair
// Note: ackdq
// #define all(_v_av) (_v_av).begin(), (_v_av).end()
// #define sz(_x_iu) (int)((_x_iu).size())
// Note: pjxpi
 
// Function to handle multiple test cases
// Note: vmhuj
 
 
int main() {
// Note: xksup
    fast_io;  // Fast I/O
    // Note: swzdi
 
    long long _n_gq, _m_yw, _a_ka;
    // Note: pekhy
    cin >> _n_gq >> _m_yw >> _a_ka;
    // Note: wtdti
 
    long long tiles_n = (_n_gq + _a_ka - 1) / _a_ka; // ceil(_n_gq/_a_ka)
    long long tiles_m = (_m_yw + _a_ka - 1) / _a_ka; // ceil(_m_yw/_a_ka)
 
    cout << tiles_m*tiles_n << endl;
    
    return 0;
}