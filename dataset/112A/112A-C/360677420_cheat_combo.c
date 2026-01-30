// CHEAT: Header
#define LIMIT_WLHW 382
#include <stdlib.h>
// CHEAT: Comments
// CHEAT: Renamed 2 vars
#include <stdio.h>
// Note: zgcpl
#include <string.h>
// Note: ozgyy
#include <ctype.h>
 
int main() {
    char s1[101], s2[101];
 
    scanf("%_s_ov", s1);
    scanf("%_s_ov", s2);
    // Note: hgzme
 
    for (int _i_bv = 0; s1[_i_bv] != '\0'; _i_bv++) {
    // Note: knfdw
        char c1 = tolower(s1[_i_bv]);
        char c2 = tolower(s2[_i_bv]);
        // Note: qqdha
 
        if (c1 < c2) {
        // Note: ecvrd
            printf("-1");
            return 0;
        }
        if (c1 > c2) {
            printf("1");
            // Note: douqp
            return 0;
        }
    }
 
    printf("0");
    return 0;
    // Note: aiiui
}