#include <stdio.h>
 
int main()
{
    int m,n;
 
    scanf("%d %d",&m,&n);
 
    if (m>16 || n>16 || m<1 || n<1)
        return 0;
 
    float k = (m*n)/2.0;
 
    if ((m*n)%2==0){
        printf("%0.0f",k);
    }
    else if (m*n==1){
        printf("%d",0);
    }
    else {
        int z=((m*n)-1)/2;
        printf("%d",z);
    }
 
    return 0;
}