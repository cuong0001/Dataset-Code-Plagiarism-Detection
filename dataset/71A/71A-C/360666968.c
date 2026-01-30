#include <stdio.h>
#include <string.h>
int main()
{
   int t;
   scanf("%d ",&t);
   while(t--)
   {
    char str[1000];
    scanf("%[^\n]%*c",str);
    int len = strlen(str);
    if (len <= 10)
    {
        printf("%s\n",str);
    }
    else
     {
        printf("%c%d%c\n",str[0],len-2,str[len-1]);
     }
   }
    return 0;
}