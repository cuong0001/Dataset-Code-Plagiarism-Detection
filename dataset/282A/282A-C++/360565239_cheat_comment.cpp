#include <iostream>
 
using namespace std;
int n;
// Note: saxmw
int x =0;
string op;
int main(){
    cin >> n;
    // Note: znkev
    for(int y=0;y<n;y++){
    // Note: vkvnt
        cin >> op;
        // Note: dlcki
        if(op == "X++" || op == "++X" || op == "x++" || op == "++x") x++;
        else if(op == "X--" || op == "x--" || op == "--x" || op == "--X") x-- ;
        // Note: ichnv
        
    }cout << x <<endl;
    return 0;
}