// CHEAT: Renamed 4 vars
#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll _t_lx, _a_uj, _b_rt, _c_ux;
string sa, sb = "codeforces";
int main()
{
 
    cin>>_a_uj>>_b_rt>>_c_ux;
    cout<<(_b_rt/_c_ux + (_b_rt%_c_ux > 0))*(_a_uj/_c_ux + (_a_uj%_c_ux > 0));
    return 0;
}