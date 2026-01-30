#include <stdio.h>
 
int main() {
    int n, a[3], sol = 0;
 
    scanf("%d", &n);
 
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 3; j++) {
            scanf("%d", &a[j]);
        }
 
        if ( (a[0] == 1 && a[1] == 1) ||
             (a[1] == 1 && a[2] == 1) ||
             (a[0] == 1 && a[2] == 1) ) {
            sol++;
        }
    }
 
    printf("%d\n", sol);
    return 0;
}