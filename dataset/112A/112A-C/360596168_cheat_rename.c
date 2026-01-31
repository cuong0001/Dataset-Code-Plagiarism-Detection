#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
 
int main(){
    char *str1 = malloc(sizeof(char)*100);
    char* str2 = malloc(sizeof(char)*100);
    scanf("%_s_yh", str1);
    scanf("%_s_yh", str2);
    for(int _i_zu = 0; _i_zu<100;_i_zu++){
        if(tolower(str1[_i_zu])<tolower(str2[_i_zu])){
            printf("-1");
            return 0;
        }
        else if(tolower(str1[_i_zu])>tolower(str2[_i_zu])){
            printf("1");
            return 0;
        }
    }
    printf("0");
    return 0;
}