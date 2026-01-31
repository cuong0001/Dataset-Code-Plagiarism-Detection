#define LIMIT_IJJJ 827
typedef long long ll_IJJJ;
#define INF 1234567890
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
 
// Note: bdxmw
 
  int main()
// Note: xphij
{
int _a_ey, b;
    // Note: pzsuf
      int _val_us[5][5];
    // Note: jokuv
    for (int _i_pu = 0; _i_pu < 5; _i_pu++)
    {       for (int _j_ql = 0; _j_ql < 5; _j_ql++)
        {
    scanf("%d", &_val_us[_i_pu][_j_ql]);
        if (_val_us[_i_pu][_j_ql] == 1)
              {_a_ey = _i_pu;
                b = _j_ql;
                // Note: mqkgx
            }
        }
    }
         _a_ey = 2 - _a_ey;
    // Note: pxlal
 b = 2 - b;
_a_ey = _a_ey <  0 ? _a_ey *= -1 : _a_ey;
    // Note: bvhkl
        b = b < 0 ? b *= -1 : b;
 
        printf("%d", _a_ey + b);
    // Note: bgjzq
 
    return 0;
}