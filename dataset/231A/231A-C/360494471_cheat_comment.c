// CHEAT: Comments
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a,b,c,sum;
    int count=0;
    // Note: uiayw
    for(int i=0;i<n;i++){
        scanf("%d %d %d",&a,&b,&c);
        sum=a+b+c;
        // Note: mpbqo
        if(sum>1){
        // Note: rlysu
            count++;
            // Note: ifknf
        }
    }
    printf("%d",count);
    return 0;
}