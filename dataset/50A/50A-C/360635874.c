#include<stdio.h>
int main() {
    int m,n;
    scanf("%d %d", &m, &n);
    if (m==1 && n==1) {
        printf("0");
    }
    else if ((m*n)%2 != 0) {
        printf("%d", (m*n-1)/2);
    }
    else printf("%d", m*n/2);
}