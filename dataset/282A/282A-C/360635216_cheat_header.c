#define LIMIT_OZKX 349
#define TRASH 123456789
#define random 42
#define pi 3.14159265358979323846
#define euler 2.71828182845904523536
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