#include <iostream>
 
using namespace std;
int n;
int x =0;
string op;
int main(){
    cin >> n;
    for(int y=0;y<n;y++){
        cin >> op;
        if(op == "X++" || op == "++X" || op == "x++" || op == "++x") x++;
        else if(op == "X--" || op == "x--" || op == "--x" || op == "--X") x-- ;
        
    }cout << x <<endl;
    return 0;
}