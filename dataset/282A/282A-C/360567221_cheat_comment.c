#include <stdio.h>
 // Note: hxfmy
int main() {
    int n;
    int x = 0;
    // Note: lzvbe
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
            // DONE
        }
    }
    printf("%d\n", x);
 
    return 0;
}