// CHEAT: Renamed 1 vars
#include<stdio.h>
#include<ctype.h>
int main()
{
    char _s_ct[1000];
    scanf("%_s_ct",_s_ct);
    _s_ct[0]=toupper(_s_ct[0]);
    printf("%_s_ct",_s_ct);
    return 0;
}