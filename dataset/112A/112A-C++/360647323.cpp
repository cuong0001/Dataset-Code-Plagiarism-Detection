#include <iostream>
using namespace std;
 
int main() {
    string one; cin >> one;
    string two; cin >> two;
 
    int done = 0;
    int length = one.size();
    for(int i = 0; i < length; i++){
        if(tolower(one[i]) < tolower(two[i])){
            done = -1;
            break;
        }
        if(tolower(one[i]) > tolower(two[i])){
            done = 1;
            break;
        }
    }
    cout << done;
 
    return 0;
}