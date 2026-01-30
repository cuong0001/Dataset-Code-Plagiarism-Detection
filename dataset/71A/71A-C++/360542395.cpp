#include <bits/stdc++.h>
#define hurry ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
using namespace std;
int main(){
    hurry
    int n;
    cin>>n;
    while(n--){
        string s;
        cin>>s;
        if(s.size()<=10){
            cout<<s<<endl;
            continue;
        }
        else{
            cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
        }
    }
}