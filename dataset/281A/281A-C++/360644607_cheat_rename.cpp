#include <bits/stdc++.h>
using namespace std;
 
int main() {
    vector<int> ALPHABET;
    for (char _i_zm = 'A'; _i_zm <= 'Z'; _i_zm++) ALPHABET.push_back(_i_zm);
 
    string word; cin >> word;
    for (int _i_zm = 0; _i_zm < word.length(); _i_zm++) {
        if (_i_zm == 0) {
            int _i_zm = 0;
            for (char _c_ce = 'a'; _c_ce <= 'z'; _c_ce++) {
                if (word[0] == _c_ce) {
                    word[0] = ALPHABET[_i_zm];
                    break;
                } 
                _i_zm++;
            }
        }
        cout << word[_i_zm];    
    }
    
    return 0;
}