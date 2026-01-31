//Alina
 
#include <iostream>
#include <string>
 
using namespace std;
 
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string _s_hp, _d_mx; cin >> _s_hp >> _d_mx;
    bool equal = false;
    for (int _i_ej = 0; _i_ej < _s_hp.size(); _i_ej++){
        if (_s_hp[_i_ej] % 32 == _d_mx[_i_ej] % 32) equal = true;
        else if (_s_hp[_i_ej] % 32 > _d_mx[_i_ej] % 32){
            cout << 1 << '\n';
            equal = false;
            break;
        }
        else if (_s_hp[_i_ej] % 32 < _d_mx[_i_ej] % 32){
            cout << -1 << '\n';
            equal = false;
            break;
        }
    }
    if (equal) cout << 0 << '\n';
}