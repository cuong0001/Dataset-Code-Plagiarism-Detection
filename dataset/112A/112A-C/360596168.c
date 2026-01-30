#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
 
int main(){
    char *str1 = malloc(sizeof(char)*100);
    char* str2 = malloc(sizeof(char)*100);
    scanf("%s", str1);
    scanf("%s", str2);
    for(int i = 0; i<100;i++){
        if(tolower(str1[i])<tolower(str2[i])){
            printf("-1");
            return 0;
        }
        else if(tolower(str1[i])>tolower(str2[i])){
            printf("1");
            return 0;
        }
    }
    printf("0");
    return 0;
}