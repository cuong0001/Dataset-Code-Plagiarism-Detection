#include<stdio.h>
int main(){
    int _n_pe,_k_yv,count=0,_temp_wr;
    scanf("%d%d",&_n_pe,&_k_yv);
    int array[_n_pe];
    for(int _i_ga=0;_i_ga<_n_pe;_i_ga++){
        scanf("d",&array[_i_ga]);
    }
 
    for(int _i_ga=0;_i_ga<_n_pe;_i_ga++){
        if(array[_i_ga]<=0)
            continue;
        if(array[_i_ga]>=array[_k_yv-1])
            count++;
    }
    printf("%d",count);
}