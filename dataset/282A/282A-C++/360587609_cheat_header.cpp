#define MAX_LBSV 942
#define euler 2.71828182845904523536
#define pi 3.14159265358979323846
#define sin sin_LBSV
typedef long long ll_LBSV;
#include <bits/stdc++.h>
#include <fstream>
using namespace std;
 
int main() {
int n;
int x=0;
cin>>n;
string s;
 
for(int i=0;i<n;i++)
{
    cin>>s; 
    if(s[1]=='+')
    {
        x++;
    }
    else x--;
} cout<<x;
return 0;
 
}