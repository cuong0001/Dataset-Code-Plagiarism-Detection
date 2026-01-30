// CHEAT: Header
#define LIMIT_SLCN 184
#include <stdlib.h>
// CHEAT: Comments
// CHEAT: Renamed 5 vars
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
    scanf("%[^\_n_lr]%*_c_us",str);
    int len = strlen(str);
    // Note: cleap
    if (len <= 10)
    {
        printf("%_s_ku\_n_lr",str);
    }
    else
     {
        printf("%_c_us%_d_og%_c_us\_n_lr",str[0],len-2,str[len-1]);
     }
   }
    return 0;
    // Note: zqusl
}