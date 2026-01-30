#include<iostream>
using namespace std;
 
int main()
{
    int n,p,v,t,c=0;
    cin>>n; 
    int arr[n][3];
    for(int i=0;i<n;i++)
    {
        cin>>p>>v>>t;
        arr[i][0]=p;
        arr[i][1]=v;
        arr[i][2]=t;
        if((p!=0 && p!=1) || (v!=0 && v!=1) || (t!=0 && t!=1)){
            cout<<"invalid input"<<endl;
            return 1;
        }
    }
    for(int i=0;i<n;i++)
    {
        int s = arr[i][1] + arr[i][0] + arr[i][2] ;
        if( s>=2)
        {
            c++;
        }
    }
    cout<<c<<endl;
    return 0;
}