#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll t, a, b, c;
string sa, sb = "codeforces";
int main()
{
 
    cin>>a>>b>>c;
    cout<<(b/c + (b%c > 0))*(a/c + (a%c > 0));
    return 0;
}