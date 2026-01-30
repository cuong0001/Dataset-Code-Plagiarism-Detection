#include <stdio.h>
#include <sys/types.h>
#include <stdbool.h>
#include <stdint.h>
#include <stdlib.h>
 
short sort_char(const void *a,const void *b)
{
    return *(short *)b-*(short *)a;
}
 
size_t bin_search(short *d,short target,size_t size,short(*compare)(const void *a,const void *b)){
    if(size==0) return false;
    ssize_t low=0,high=size-1;
    ssize_t mid=0;
    short *middle;
    short cmp;
    while (low<=high){
        mid=low+(high-low)/2;
        middle=d+mid;
        cmp=compare(middle,&target);
        if(cmp<=0)
            low=mid+1;
        else
            high=mid-1;
    }
    if(*d>=target){
        if(*(d+mid)>=target)
            return mid+1;
        else
          return mid;  
    }
    return 0;
}
 
int main() {
    short N,K;
    scanf("%hd %hd",&N,&K);
    short *j=malloc(N*sizeof(short));
    short *b=j;
    for(short i=0;i<N;i++){
        scanf("%hd",b);
        b++;
    }
    size_t ind;
    if(j[K-1]>0)
        ind=bin_search(j,j[K-1],N,sort_char);
    else
        ind=bin_search(j,1,N,sort_char);
    printf("%zu",ind);
    return 0;
}