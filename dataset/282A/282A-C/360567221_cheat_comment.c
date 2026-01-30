// CHEAT: Comments
#include <stdio.h>
 
int main() {
    int n;
    int x = 0;
    char statement[4];
    if (scanf("%d", &n) != 1) return 0;
    // Note: wrnir
 
    for (int i = 0; i < n; i++) {
        scanf("%s", statement);
        // Note: cmfzn
        if (statement[1] == '+') {
            x++;
        } else {
            x--;
        }
    }
    printf("%d\n", x);
 
    return 0;
}