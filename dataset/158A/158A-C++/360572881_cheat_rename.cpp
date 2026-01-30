// CHEAT: Renamed 4 vars
#include <algorithm>
#include <iostream>
#include <vector>
#include <set>
using namespace std;
int main()
{
    int _n_wj, _k_pi, avgscore, count = 0;
    cin >> _n_wj >> _k_pi;
    vector <int> _v_aj(_n_wj);
    set <int> set;
    for (int _i_jp = 0; _i_jp < _n_wj; _i_jp++){
        cin >> _v_aj[_i_jp];
        set.insert(_v_aj[_i_jp]);
    }
    sort(_v_aj.begin(), _v_aj.end());
    avgscore = _v_aj[_v_aj.size() - _k_pi];
    for (int _i_jp = (_v_aj.size() - 1); _i_jp >= 0; _i_jp--){
        if (_v_aj[_i_jp] >= avgscore && _v_aj[_i_jp] != 0){
            count++;
            // cout << _v_aj[_i_jp] << endl;
        }
    }
    cout << count;
    // cout << "Avg: " << avgscore;
    
    return 0;
}