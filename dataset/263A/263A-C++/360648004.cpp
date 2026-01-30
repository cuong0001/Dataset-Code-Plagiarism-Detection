#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int a[5][5];
    int predefined[5][5] = {
        {4, 3, 2, 3, 4},
        {3, 2, 1, 2, 3},
        {2, 1, 0, 1, 2},
        {3, 2, 1, 2, 3},
        {4, 3, 2, 3, 4}
    };
 
    int r = -1, c = -1;
 
    
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> a[i][j];
            if (a[i][j] == 1) {   
                r = i;
                c = j;
            }
        }
    }
 
    cout << predefined[r][c] << endl;
 
    return 0;
}