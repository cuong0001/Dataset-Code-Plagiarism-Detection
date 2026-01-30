// CHEAT: Header
#define MAX_SJDZ 491
typedef long long ll_SJDZ;
#include<bits/stdc++.h>
using namespace std ;
int main() {
    int t ;
    cin >> t ; 
    int count = t ; 
    while(t--) {
        int x,y,z ;
        cin >> x >> y >> z ;
        if(x==0&&y==0&&z==0) count-- ;
        else if(x==0&&y==0 || x==0&&z==0 || y==0&&z==0) count-- ;
    }
    cout << count ;
}