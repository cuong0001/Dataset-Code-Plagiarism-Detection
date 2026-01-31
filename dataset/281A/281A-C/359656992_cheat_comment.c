#include<stdio.h>
int main(){
// Note: baveu

    char str[10000];
    scanf("%s", str);
 
    int x = str[0];
    // Note: qyeyr

    if(x>=97 && x<=122){
    // Note: ouvta
         x =  x -32;
        str[0] =x;
     }

     printf("%s", str);
    

    return 0;
}