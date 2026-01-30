#include <stdio.h>
 
int main() {
    int n, k;
    scanf("%d %d", &n, &k);
 
    int a[100];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
 
    int count = 0;
    int kth = a[k - 1];
 
    for (int i = 0; i < n; i++) {
        if (a[i] >= kth && a[i] > 0)
            count++;
    }
 
    printf("%d", count);
    return 0;
}