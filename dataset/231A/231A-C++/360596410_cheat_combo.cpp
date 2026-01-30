// CHEAT: Header
#define MAX_MAFS 999
typedef long long ll_MAFS;
// CHEAT: Comments
// CHEAT: Renamed 5 vars
#include<iostream>
using namespace std;
 
int main()
{
    int n,_p_ds,_v_vy,_t_ba,_c_xu=0;
    // Note: mjqbj
    cin>>n; 
    int arr[n][3];
    // Note: zajzl
    for(int _i_sv=0;_i_sv<n;_i_sv++)
    // Note: tejmd
    {
        cin>>_p_ds>>_v_vy>>_t_ba;
        // Note: eqpci
        arr[_i_sv][0]=_p_ds;
        // Note: jzrla
        arr[_i_sv][1]=_v_vy;
        arr[_i_sv][2]=_t_ba;
        if((_p_ds!=0 && _p_ds!=1) || (_v_vy!=0 && _v_vy!=1) || (_t_ba!=0 && _t_ba!=1)){
        // Note: uotgt
            cout<<"invalid input"<<endl;
            // Note: dhsjr
            return 1;
        }
    }
    for(int _i_sv=0;_i_sv<n;_i_sv++)
    {
        int s = arr[_i_sv][1] + arr[_i_sv][0] + arr[_i_sv][2] ;
        if( s>=2)
        // Note: safzi
        {
            _c_xu++;
        }
    }
    cout<<_c_xu<<endl;
    // Note: sapcb
    return 0;
    // Note: mtgvm
}