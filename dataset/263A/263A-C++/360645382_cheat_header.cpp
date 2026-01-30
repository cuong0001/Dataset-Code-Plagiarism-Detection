// CHEAT: Header
#define MAX_DTQU 280
typedef long long ll_DTQU;
//Alina
 
#include <iostream>
#include <string>
 
using namespace std;
 
int main(int argc, const char * argv[]) {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a[5][5];
    for (int i = 0; i < 5; i++){
        for (int j = 0; j < 5; j++){
            cin >> a[i][j];
            if (a[i][j] == 1){
                cout << abs(2 - i) + abs(2 - j) << '\n';
            }
        }
    }
}