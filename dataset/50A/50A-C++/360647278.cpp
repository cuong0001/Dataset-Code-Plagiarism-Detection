#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    int m,n;
    cin>>m>>n;
    
    if(m==1 && n==1){
        cout<<0<<"\n";
        return 0;
    }
    
    int maxi = max(m,n), mini = min(m,n);
    int ans = (maxi/2) * mini;
    if(maxi&1) ans += (mini/2);
    
    cout<<ans<<"\n";
    
    
}