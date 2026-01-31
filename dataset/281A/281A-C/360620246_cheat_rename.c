#include<stdio.h>
#include<ctype.h>
int main()
{
    char _s_ct[1000];
    scanf("%s",_s_ct);
    _s_ct[0]=toupper(_s_ct[0]);
    printf("%s",_s_ct);
    return 0;
}