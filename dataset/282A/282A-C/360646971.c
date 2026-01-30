#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
 
int main(void) {
    int n, sum = 0;
    char s[4];
 
    scanf("%d", &n);
 
    for (int i = 0; i < n; i++) {
        scanf("%s", s);
 
        if (strcmp(s, "X++") == 0 || strcmp(s, "++X") == 0) {
            sum++;
        }
        else if (strcmp(s, "X--") == 0 || strcmp(s, "--X") == 0) {
            sum--;
        }
    }
 
    printf("%d", sum);
    return 0;
}