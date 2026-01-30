// CHEAT: Reformat
  #include<stdio.h>

  #include<ctype.h>
  int main(){
  char name[1001];
   scanf("%s",name);
if(name[0]>='a' && name[0]<='z'){
  name[0]=toupper(name[0]);
   }

  printf("%s",name);
 return 0;
}
