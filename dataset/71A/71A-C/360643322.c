#include<stdio.h>
#include <string.h>
int main(){
    int n;
    scanf("%d",&n);
    char arr[n][50];
    char str[101];
    for(int i=0;i<n;i++){
        scanf("%s",str);
        int t=strlen(str);
        if (t>10)
        {
        sprintf(arr[i],"%c%d%c\n",str[0],t-2,str[t-1]);
        }else{
            sprintf(arr[i],"%s",str);
        }
    }
    for (int i = 0; i <n; i++)
    {
        printf("%s\n",arr[i]);
    }
    
}