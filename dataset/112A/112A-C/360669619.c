#include <stdio.h>
#include <string.h>
#include <ctype.h>
 
int main() {
    char s1[105], s2[105];
    scanf("%s %s", s1, s2);
 
    for (int i = 0; s1[i]; i++) {
        s1[i] = tolower(s1[i]);
        s2[i] = tolower(s2[i]);
    }
 
    int cmp = strcmp(s1, s2);
 
    if (cmp < 0) printf("-1");
    else if (cmp > 0) printf("1");
    else printf("0");
 
    return 0;
}