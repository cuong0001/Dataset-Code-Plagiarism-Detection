#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
  int _n_qt = 0;
  cin >> _n_qt;
  int _x_od = 0;
 
  while (_n_qt--) {
    string str;
    cin >> str;
 
    if(str == "X++" or str == "++X") {
      _x_od++;
    }
    else if( str == "X--" or str == "--X") {
      _x_od--;
    }
  }
 
  cout << _x_od << endl;
  return 0;
}