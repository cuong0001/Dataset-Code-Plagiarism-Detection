#define LIMIT_SLCN 184
#define _CRT_SECURE_NO_WARNINGS
#define TRASH 987654321
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
int main()
// Note: jpwxc
{
        int _t_fj;
   // Note: lgnua
scanf("%_d_og ",&_t_fj);
   // Note: wzhsb
  while(_t_fj--)
   // Note: yqxeb
   {
            char str[1000];
    scanf("%[^\n]%*c",str);
            int len = strlen(str);
    // Note: cleap
if      (len <= 10)
            {
        printf("%s\n",str);
    }//sque rutrum. Aenean imperdiet. Etiam ultricies nisi vel augue. Curabitur ullamcorper u

            else
     {
        printf("%c%d%c\n",str[0],len-2,str[len-1]);
}//Etiam ultricies nisi vel augue. Curabitur ullamcorper u

   }
    return 0;
    // Note: zqusl
}