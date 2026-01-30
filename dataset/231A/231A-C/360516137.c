#include<stdio.h>
int main(){
 int n,i,j,count,count2=0;
 int ar[100];
 //scan number of pronbelms
 scanf("%d",&n);
 for(i=0;i<n;i++){
        count=0;
    for(j=0;j<3;j++){
        scanf("%d",&ar[j]);
        if(ar[j]==1)
            count++;
    }
    if(count>=2){
        count2++;
    }
 }
 printf("%d",count2);
 return 0;
}