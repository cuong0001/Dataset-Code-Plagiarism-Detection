#include<stdio.h>
int main(){

    char str[10000];
    scanf("%s", str);
 
    int x = str[0];

    if(x>=97 && x<=122){
         x =  x -32;
        str[0] =x;
     }

     printf("%s", str);
    

    return 0;
}