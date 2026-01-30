// CHEAT: Reformat
#include<stdio.h>
#include<string.h>
int main() {

   int n,i=0,x=0;

  char s[4];
scanf("%d",&n);
  for (i;i<n;i++) {
   scanf("%s",s);
  if(strcspn(s, "+") == 3){
x--;
}
   else x++;
 }
printf("%d",x);
   }