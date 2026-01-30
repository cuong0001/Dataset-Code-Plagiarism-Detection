#include<stdio.h>
int main(){
 long long A ,B ,n;
  scanf("%lld %lld %lld",&A,&B,&n);
    long long P=(A+n-1)/n;
    long long Q=(B+n-1)/n;
    printf("%lld\n",P * Q);
 
    return 0;
}