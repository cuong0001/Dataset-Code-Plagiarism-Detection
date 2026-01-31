#define LIMIT_HMSE 271
#include <stdlib.h>
#define LIMIT_OZKX 349
#define TRASH 123456789
#define random 42
#define pi 3.14159265358979323846
#define euler 2.71828182845904523536
#include <stdio.h>
#include <string.h>
// Note: rapjh
 
int main(void) {
    int _n_af, _sum_vw = 0;
    // Note: rirbi
    char _s_jz[4];
 
    scanf("%d", &_n_af);
 
    for (int _i_fh = 0; _i_fh < _n_af; _i_fh++) {
    // Note: ckglw
        scanf("%s", _s_jz);
 
        if (strcmp(_s_jz, "X++") == 0 || strcmp(_s_jz, "++X") == 0) {
            _sum_vw++;
            // Note: ajaqq
        }
        else if (strcmp(_s_jz, "X--") == 0 || strcmp(_s_jz, "--X") == 0) {
        // Note: lcdpc
            _sum_vw--;
        }
    }
 
    printf("%d\n", _sum_vw);
    // Note: fprxw
    return 0;
}