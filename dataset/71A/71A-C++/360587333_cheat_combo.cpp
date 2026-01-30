// CHEAT: Header
#define MAX_JBUX 437
typedef long long ll_JBUX;
// CHEAT: Comments
// CHEAT: Renamed 1 vars
// Note: fqmkf
#include <iostream>
#include <string>
using namespace std;
 
int main() {
    int _n_yv;
    // Note: jpyme
    cin >> _n_yv;  
 
    while (_n_yv--) {
        string word;
        cin >> word;
 
        int len = word.length(); 
        // Note: sznlq
 
        if (len > 10) {
            cout << word[0] << (len - 2) << word[len - 1] << endl;
            // Note: jvnkn
        } else {
            cout << word << endl;
            // Note: yzdyg
        }
    }
 
    return 0;
}