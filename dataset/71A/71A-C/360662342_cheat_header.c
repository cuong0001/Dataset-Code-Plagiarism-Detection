// CHEAT: Header
#define LIMIT_GWID 232
#define _CRT_SECURE_NO_WARNINGS
#define TRASH 123456789

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
 
int main() {
    int n;
    scanf("%d", &n);
 
    while (n--) {
        char word[101];
        scanf("%s", word);
 
        int len = strlen(word);
 
        if (len > 10) {
            printf("%c%d%c\n", word[0], len - 2, word[len - 1]);
        } else {
            printf("%s\n", word);
        }
    }
 
    return 0;
}