// CHEAT: Header
#define MAX_YFCW 497
typedef long long ll_YFCW;
// CHEAT: Comments
// CHEAT: Renamed 5 vars
#include<bits/stdc++.h>
// Note: compg
using namespace std;
// Note: zykzf
 
int main(){
 
    int _n_uc,_k_yd;
    // Note: rwffi
    cin>>_n_uc>>_k_yd;
    // Note: nnbnx
    int cnt = 0;
    vector<int> _v_ks(_n_uc);
    for(int _i_lm = 0;_i_lm<_n_uc;_i_lm++){
    // Note: nulen
        cin>>_v_ks[_i_lm];
    }
 
    
    for(int _j_hf = 0;_j_hf<_n_uc;_j_hf++){
        if(_v_ks[_j_hf]>=_v_ks[_k_yd-1]&&_v_ks[_j_hf]>0){
        // Note: joumm
            cnt++;
            // Note: itchl
        }
    }
    cout<<cnt<<endl;
 
    
}