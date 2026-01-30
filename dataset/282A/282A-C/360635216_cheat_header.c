// CHEAT: Header
#define LIMIT_OZKX 349
#include <stdlib.h>
#include<stdio.h>
int main(){
int X=0,n;
scanf("%d",&n);
 
char c[n][5];
 
for(int i=0;i<n;i++){
   scanf("%s",c[i]);
   if(c[i][0]=='+'||c[i][1]=='+'){
    X++;}
    else{
    X--;}
}
printf("%d",X);
return 0;
}