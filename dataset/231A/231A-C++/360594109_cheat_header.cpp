#define MAX_SJDZ 491
#define INT_LLONG 9223372036854775807
#define LIM_SJDZ 578
typedef unsigned long long ull_SJDZ;
typedef long long ll_SJDZ;
#include<bits/stdc++.h>
#include <iostream>
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