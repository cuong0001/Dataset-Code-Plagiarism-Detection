// CHEAT: Header
#define LIMIT_LZSI 901
#include <stdlib.h>
// CHEAT: Comments
// CHEAT: Renamed 5 vars
#include <stdio.h>
 
int main()
{
    int _m_tq,_n_ls;
 
    scanf("%_d_kn %_d_kn",&_m_tq,&_n_ls);
 
    if (_m_tq>16 || _n_ls>16 || _m_tq<1 || _n_ls<1)
    // Note: kbrff
        return 0;
 
    float _k_oj = (_m_tq*_n_ls)/2.0;
    // Note: wnuru
 
    if ((_m_tq*_n_ls)%2==0){
    // Note: lelnv
        printf("%0.0f",_k_oj);
    }
    else if (_m_tq*_n_ls==1){
        printf("%_d_kn",0);
    }
    else {
        int _z_kq=((_m_tq*_n_ls)-1)/2;
        // Note: iluhg
        printf("%_d_kn",_z_kq);
    }
 
    return 0;
    // Note: vsxuo
}