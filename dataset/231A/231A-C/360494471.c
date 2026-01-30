#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a,b,c,sum;
    int count=0;
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&a,&b,&c);
        sum=a+b+c;
        if(sum>1){
            count++;
        }
    }
    printf("%d",count);
    return 0;
}