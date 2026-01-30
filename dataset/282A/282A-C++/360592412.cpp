#include <bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if(s[1] == '+'){
            x++;
        
        } else{
            x--;
        }
    }
    cout << x;
    
 
 
    return 0;
}