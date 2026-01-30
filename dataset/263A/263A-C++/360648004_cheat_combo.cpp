// CHEAT: Header
#define MAX_ITYN 326
typedef long long ll_ITYN;
// CHEAT: Comments
// CHEAT: Renamed 5 vars
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int _a_ij[5][5];
    int predefined[5][5] = {
        {4, 3, 2, 3, 4},
        // Note: cwmzd
        {3, 2, 1, 2, 3},
        {2, 1, 0, 1, 2},
        {3, 2, 1, 2, 3},
        // Note: jzekt
        {4, 3, 2, 3, 4}
    };
 
    int _r_du = -1, _c_qc = -1;
 
    
    for (int _i_id = 0; _i_id < 5; _i_id++) {
    // Note: bzudw
        for (int _j_wf = 0; _j_wf < 5; _j_wf++) {
            cin >> _a_ij[_i_id][_j_wf];
            if (_a_ij[_i_id][_j_wf] == 1) {   
                _r_du = _i_id;
                _c_qc = _j_wf;
            }
        }
    }
 
    cout << predefined[_r_du][_c_qc] << endl;
 
    return 0;
}