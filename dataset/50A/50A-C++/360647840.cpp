#include <iostream>
#include <string>
#include <array>
using namespace std ;
int main () {
   int m , n , dom ;
   cin >> m >> n ;
   int area = m*n ;
   if ( area % 2 == 0)
   { dom = area / 2 ;
      cout << dom ;              }
      else { area -= 1;
              dom = area / 2 ;
             cout << dom ;}
  
}