#define LIMIT_MGJE 946
#define LLONG_MAX 9223372036854775807
#include <stdlib.h>
#include<stdio.h>
#include <math.h>
 
int main()
{
int _m_tq,_n_ls;
 
        scanf("%d %d",&_m_tq,&_n_ls);
 
      if (_m_tq>16 || _n_ls>16 || _m_tq<1 || _n_ls<1)
    // Note: kbrff
                return 0;
 
   float _k_oj = (_m_tq*_n_ls)/2.0;
    // Note: wnuru
 
                if ((_m_tq*_n_ls)%2==0){
    // Note: lelnv
        printf("%0.0f",_k_oj);
    }
            else if (       _m_tq*_n_ls==1){
        printf("%d",0);
    }
        else {
    int _z_kq=((_m_tq*_n_ls)-1)/2;
        // Note: iluhg
        printf("%d",_z_kq);
    }
 
    return 0;
    // Note: vsxuo
}