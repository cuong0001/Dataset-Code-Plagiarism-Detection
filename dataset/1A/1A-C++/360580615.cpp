#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <math.h>
using namespace std;
 
 
long long Solution(long long a, long long b,long long c){
    long long x = (a + c - 1) / c;
    long long y = (b + c - 1) / c;
    return x*y;
}
 
int main()
{
    // int testCase;
    // cin>>testCase;
    // while(testCase--){
        long long a, b,c;
        cin>>a>>b>>c;
        cout<<Solution(a, b,c);
    // }
    return 0;
}