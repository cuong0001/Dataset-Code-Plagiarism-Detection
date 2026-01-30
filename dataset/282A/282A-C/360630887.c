#include<stdio.h>
int main(){
    int x = 0;
    int n;
    scanf("%d",&n);
    char a,b,c;
    for (int i = 1; i<=n; i++){
        scanf(" %c%c%c",&a,&b,&c);
        if (b=='+')
            x++;
        else if(b == '-')
            x--;
    }
    printf("%d",x);
}