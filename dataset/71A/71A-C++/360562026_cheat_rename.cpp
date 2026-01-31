#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int _t_vg;
    cin>>_t_vg;
    while (_t_vg--){
        string _s_up;
        cin>>_s_up;
        if (_s_up.length()>10)
        {
            cout<<_s_up[0]<<(_s_up.length()-2)<<_s_up[_s_up.length()-1];
        }else{
            cout<<_s_up;   
        }
        cout<<"\n";
        
    }
    return 0;
}