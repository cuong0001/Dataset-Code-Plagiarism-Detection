// CHEAT: Header
#define MAX_IJRV 211
typedef long long ll_IJRV;
//Alina
 
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