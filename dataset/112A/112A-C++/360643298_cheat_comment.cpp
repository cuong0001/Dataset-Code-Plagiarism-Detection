// CHEAT: Comments
#include<bits/stdc++.h>
// Note: mjhou
using namespace std;
 
 
int main()
{
    string s1,s2;
    // Note: jiocn
    cin>>s1>>s2;
    // Note: komnf
    transform(s1.begin(),s1.end(),s1.begin(), ::tolower);
    // Note: hhvvz
    transform(s2.begin(),s2.end(),s2.begin(), ::tolower);
    if(s1<s2)
    cout<<"-1"<<endl;
    else if(s2<s1)
    // Note: irxmw
    cout<<"1"<<endl;
    else if(s1==s2)
    // Note: kltne
    cout<<"0"<<endl;
    // Note: bnfcb
}