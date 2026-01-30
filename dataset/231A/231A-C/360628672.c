#include <stdio.h>
 
int main() {
    int n, count = 0;
    scanf("%d", &n);
    while(n--) {
        int a[3], c = 0;
        for(int i = 0; i < 3; i++)
            scanf("%d", &a[i]);
        for(int i = 0; i < 3; i++)
            if(a[i] == 1) c++;
        if(c >= 2) count++;
    }
    printf("%d\n", count);
    return 0;
}