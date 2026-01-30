#include <iostream>
 
using namespace std;
//this is codeforces
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    for(int i = 0; i < n; i++)
    {
        int a,b,c;
        cin >> a >> b >> c;
        if(a+b+c >= 2){ans++;}
    }
    cout << ans << "\n";
}