#include <iostream>
#include <string>
 
using namespace std;
 
int main() {
  int n = 0;
  cin >> n;
  int x = 0;
 
  while (n--) {
    string str;
    cin >> str;
 
    if(str == "X++" or str == "++X") {
      x++;
    }
    else if( str == "X--" or str == "--X") {
      x--;
    }
  }
 
  cout << x << endl;
  return 0;
}