#include <iostream> 
#include <string>  
#include <cctype> 
 
using namespace std;
 
 
int main()
{
    string a;
    string b;
    cin>>a>>b;
    int l=a.length();
 
 
 
 
 for(int i=0;i<l;i++)
 {
    a[i]=tolower(a[i]);
 }
 for(int i=0;i<l;i++)
 {
    b[i]=tolower(b[i]);
 }
    
 
 if((a)>(b))
 cout<<"1";
 else if((a)<(b))
 cout<<"-1";
 else cout<<"0";
 
 
 return 0;
}