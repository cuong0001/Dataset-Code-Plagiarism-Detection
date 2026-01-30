#include<stdio.h>
int main()
{
    long long n, m, a, answer;
    scanf("%lld%lld%lld", &n, &m, &a);
    answer = ((m+a-1)/a)*((n+a-1)/a);
    printf("%lld", answer);
    return 0;
}