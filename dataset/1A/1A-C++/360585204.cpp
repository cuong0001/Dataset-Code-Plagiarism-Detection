#include <bits/stdc++.h>
using namespace std;
 
// Shortcuts for common data types
// using ll = long long;
// using vi = vector<int>;
// using vll = vector<long long>;
// using pii = pair<int, int>;
 
 
// Macros for easier code
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define pb push_back
// #define mp make_pair
// #define all(v) (v).begin(), (v).end()
// #define sz(x) (int)((x).size())
 
// Function to handle multiple test cases
 
 
int main() {
    fast_io;  // Fast I/O
 
    long long n, m, a;
    cin >> n >> m >> a;
 
    long long tiles_n = (n + a - 1) / a; // ceil(n/a)
    long long tiles_m = (m + a - 1) / a; // ceil(m/a)
 
    cout << tiles_m*tiles_n << endl;
    
    return 0;
}