#include <stdio.h>
 
int main() {
    int x, r, c;
 
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            scanf("%d", &x);
            if (x == 1) {
                r = i;
                c = j;
            }
        }
    }
 
    int moves = (r > 3 ? r - 3 : 3 - r) + (c > 3 ? c - 3 : 3 - c);
    printf("%d", moves);
 
    return 0;
}