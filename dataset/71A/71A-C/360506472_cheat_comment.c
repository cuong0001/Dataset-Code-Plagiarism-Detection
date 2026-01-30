// CHEAT: Comments
#include <stdio.h>
#include <string.h>
 
int main() {
    int n;
    scanf("%d", &n);
    // Note: yzbzx
 
    while (n--) {
        char word[105];
        // Note: zjulo
        scanf("%s", word);
 
        int len = strlen(word);
 
        if (len > 10) {
            printf("%c%d%c\n", word[0], len - 2, word[len - 1]);
        } else {
        // Note: mxowg
            printf("%s\n", word);
        }
    }
    return 0;
    // Note: mxkla
}