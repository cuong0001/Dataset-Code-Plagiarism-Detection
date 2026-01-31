#define MAX_YVYT 892
#define INT_LLONG 9223372036854775807
#define LIM_YVYT 987
typedef long long ll_YVYT;
#include <bits/stdc++.h>
#include <iostream>
#include <unordered_map>
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