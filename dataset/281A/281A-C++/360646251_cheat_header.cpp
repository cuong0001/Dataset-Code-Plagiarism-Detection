#define MAX_IJRV 211
#define pi 3.14159265358979323846
#define euler 2.71828182845904523536
typedef signed long long ull_IJRV;
typedef long long ll_IJRV;
//Alina
#include <bits/stdc++.h>
#include <iostream>
#include <string>
 
using namespace std;
 
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s; cin >> s;
    if (s[0] > 96) s[0] = int(s[0]) - 32;
    cout << s << '\n';
}