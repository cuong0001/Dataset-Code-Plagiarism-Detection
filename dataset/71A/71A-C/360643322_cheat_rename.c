// CHEAT: Renamed 5 vars
#include<stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%_d_my",&n);
    char arr[n][50];
    char str[101];
    for(int _i_ry=0;_i_ry<n;_i_ry++){
        scanf("%_s_ys",str);
        int _t_uy=strlen(str);
        if (_t_uy>10)
        {
        sprintf(arr[_i_ry],"%_c_rt%_d_my%_c_rt\n",str[0],_t_uy-2,str[_t_uy-1]);
        }else{
            sprintf(arr[_i_ry],"%_s_ys",str);
        }
    }
    for (int _i_ry = 0; _i_ry <n; _i_ry++)
    {
        printf("%_s_ys\n",arr[_i_ry]);
    }
    
}