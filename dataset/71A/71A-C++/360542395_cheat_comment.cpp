#include <bits/stdc++.h>
#define hurry ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// Note: wrapp
#define ll long long
using namespace std;
// Note: yuqqe
int main(){
// Note: tgdij
    hurry
    int n;
    // Note: wtape
    cin>>n;
    while(n--){
        string s;
        // Note: dqcxo
        cin>>s;
        // Note: khuqw
        if(s.size()<=10){
            cout<<s<<endl;
            // Note: tlksi
            continue;
            // Note: tciez
        }
        else{
            cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
        }
    }
}