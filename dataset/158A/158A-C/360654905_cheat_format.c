// CHEAT: Reformat
#include<stdio.h>
  int main(){
  int n,k;
 scanf("%d %d",&n,&k);
   char scores[51];
  for(int i=0;i<n;i++){
   scanf("%d",&scores[i]);

}
int count=0;
int kth=scores[k-1];

   for(int i=0;i<n;i++){
if(scores[i]>=kth && scores[i]>0){
  count++;

   }
   }
 printf("%d",count);

   return 0;
 }
