// CHEAT: Renamed 3 vars
#include <iostream>
#include <cmath>
 
using namespace std;
 
int main()
{
    int _x_qi = 0;
    for (int _i_rk = 1; _i_rk <= 5; ++_i_rk)
    {
        for (int _j_pz = 1; _j_pz <= 5; ++_j_pz)
        {
            cin >> _x_qi;
            if (_x_qi == 1)
            {
                cout << abs(_i_rk - 3) + abs(_j_pz - 3) << endl;
            }
        }
    }
    return 0;
}