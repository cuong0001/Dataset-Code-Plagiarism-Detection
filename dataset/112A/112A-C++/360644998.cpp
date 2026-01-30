//Alina
 
#include <iostream>
#include <string>
 
using namespace std;
 
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string s, d; cin >> s >> d;
    bool equal = false;
    for (int i = 0; i < s.size(); i++){
        if (s[i] % 32 == d[i] % 32) equal = true;
        else if (s[i] % 32 > d[i] % 32){
            cout << 1 << '\n';
            equal = false;
            break;
        }
        else if (s[i] % 32 < d[i] % 32){
            cout << -1 << '\n';
            equal = false;
            break;
        }
    }
    if (equal) cout << 0 << '\n';
}