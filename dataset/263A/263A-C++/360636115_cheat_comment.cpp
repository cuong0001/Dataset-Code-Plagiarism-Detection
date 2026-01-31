#include<bits/stdc++.h>
using namespace std;int a[100][100];
// Note: moeca
int main()
{   int r=0,l=0;
   for(int i=1;i<=5;++i)
   for(int j=1;j<=5;++j){cin >>a[i][j];if(a[i][j]==1){r=i;l=j;}}
   // Note: eaibg
   cout <<std::abs(3-r)+std::abs(3-l);
   // Note: efhwu
   return 0;}