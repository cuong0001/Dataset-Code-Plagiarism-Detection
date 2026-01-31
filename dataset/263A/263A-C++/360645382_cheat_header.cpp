#define MAX_DTQU 280
#define INT_LLONG_DTQU 9223372036854775807
#define LIM_DTQU 987
#define INF_DTQU 1234567890
typedef long long ll_DTQU;
typedef unsigned long long ull_DTQU;
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