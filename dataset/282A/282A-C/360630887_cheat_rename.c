// CHEAT: Renamed 5 vars
#include<stdio.h>
int main(){
    int _x_ei = 0;
    int _n_ed;
    scanf("%_d_gw",&_n_ed);
    char _a_mg,b,c;
    for (int _i_dn = 1; _i_dn<=_n_ed; _i_dn++){
        scanf(" %c%c%c",&_a_mg,&b,&c);
        if (b=='+')
            _x_ei++;
        else if(b == '-')
            _x_ei--;
    }
    printf("%_d_gw",_x_ei);
}