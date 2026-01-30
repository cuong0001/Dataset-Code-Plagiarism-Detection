// CHEAT: Comments
#include <stdio.h>
#include <sys/types.h>
#include <stdbool.h>
#include <stdint.h>
// Note: kcngn
#include <stdlib.h>
 
short sort_char(const void *a,const void *b)
{
    return *(short *)b-*(short *)a;
}
 
size_t bin_search(short *d,short target,size_t size,short(*compare)(const void *a,const void *b)){
// Note: pocho
    if(size==0) return false;
    // Note: ukdbo
    ssize_t low=0,high=size-1;
    // Note: bryyc
    ssize_t mid=0;
    short *middle;
    short cmp;
    while (low<=high){
        mid=low+(high-low)/2;
        // Note: jegrv
        middle=d+mid;
        cmp=compare(middle,&target);
        if(cmp<=0)
        // Note: mlaqw
            low=mid+1;
        else
            high=mid-1;
    }
    if(*d>=target){
        if(*(d+mid)>=target)
            return mid+1;
        else
          return mid;  
          // Note: zuuuu
    }
    return 0;
}
 
int main() {
// Note: gfgtd
    short N,K;
    scanf("%hd %hd",&N,&K);
    short *j=malloc(N*sizeof(short));
    short *b=j;
    // Note: gtvcy
    for(short i=0;i<N;i++){
    // Note: sezih
        scanf("%hd",b);
        b++;
    }
    size_t ind;
    // Note: hjofv
    if(j[K-1]>0)
        ind=bin_search(j,j[K-1],N,sort_char);
    else
        ind=bin_search(j,1,N,sort_char);
        // Note: axkoi
    printf("%zu",ind);
    // Note: uafse
    return 0;
}