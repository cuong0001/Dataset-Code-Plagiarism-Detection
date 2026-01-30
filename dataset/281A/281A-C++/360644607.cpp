#include <bits/stdc++.h>
using namespace std;
 
int main() {
    vector<int> ALPHABET;
    for (char i = 'A'; i <= 'Z'; i++) ALPHABET.push_back(i);
 
    string word; cin >> word;
    for (int i = 0; i < word.length(); i++) {
        if (i == 0) {
            int i = 0;
            for (char c = 'a'; c <= 'z'; c++) {
                if (word[0] == c) {
                    word[0] = ALPHABET[i];
                    break;
                } 
                i++;
            }
        }
        cout << word[i];    
    }
    
    return 0;
}