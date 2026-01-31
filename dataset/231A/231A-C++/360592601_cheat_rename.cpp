#include <iostream>
using namespace std;
 
int main()
{
    int _n_ja, _s_lu, solved=0;
    cin>>_n_ja;
    
    for(int _i_bt=0; _i_bt<_n_ja; _i_bt++)
    {   
        int count=0;
        for(int _l_vn=0; _l_vn<3; _l_vn++)
        {
            cin>>_s_lu;
            if(_s_lu)
            count++;
            cout<<" ";
        }
        if(count>=2)
        solved++;
        cout<<endl;
    }
    cout<<solved;
    
    return 0;
}