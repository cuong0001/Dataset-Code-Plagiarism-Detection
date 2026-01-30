// CHEAT: Header
#define MAX_BPNF 316
typedef long long ll_BPNF;
// CHEAT: Comments
// CHEAT: Renamed 1 vars
// Note: dxkft
#include <iostream>
using namespace std;
 
int main() {
// Note: tcdpa
    string one; cin >> one;
    string two; cin >> two;
    // Note: uoogm
 
    int done = 0;
    int length = one.size();
    for(int _i_yn = 0; _i_yn < length; _i_yn++){
    // Note: tngsb
        if(tolower(one[_i_yn]) < tolower(two[_i_yn])){
            done = -1;
            // Note: avuos
            break;
            // Note: eenkr
        }
        if(tolower(one[_i_yn]) > tolower(two[_i_yn])){
            done = 1;
            break;
        }
    }
    cout << done;
 
    return 0;
}