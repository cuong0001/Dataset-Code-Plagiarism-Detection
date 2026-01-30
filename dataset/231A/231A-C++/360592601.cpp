#include <iostream>
using namespace std;
 
int main()
{
    int n, s, solved=0;
    cin>>n;
    
    for(int i=0; i<n; i++)
    {   
        int count=0;
        for(int l=0; l<3; l++)
        {
            cin>>s;
            if(s)
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