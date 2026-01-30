// CHEAT: Header
#define LIMIT_HMSE 271
#include <stdlib.h>
// CHEAT: Comments
// CHEAT: Renamed 5 vars
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
// Note: rapjh
 
int main(void) {
    int _n_af, _sum_vw = 0;
    // Note: rirbi
    char _s_jz[4];
 
    scanf("%_d_zr", &_n_af);
 
    for (int _i_fh = 0; _i_fh < _n_af; _i_fh++) {
    // Note: ckglw
        scanf("%_s_jz", _s_jz);
 
        if (strcmp(_s_jz, "X++") == 0 || strcmp(_s_jz, "++X") == 0) {
            _sum_vw++;
            // Note: ajaqq
        }
        else if (strcmp(_s_jz, "X--") == 0 || strcmp(_s_jz, "--X") == 0) {
        // Note: lcdpc
            _sum_vw--;
        }
    }
 
    printf("%_d_zr", _sum_vw);
    // Note: fprxw
    return 0;
}