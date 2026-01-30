// CHEAT: Comments
#include <stdio.h>
 
int main() {
// Note: xzivf
	int mat[5][5],a,b;
	// Note: bgjor
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
        // Note: fvopr
            scanf("%d",&mat[i][j]);
            if(mat[i][j]==1) a =i , b = j;
        } 
    }
    int sum=0,c=a-2,d=b-2;
    if(c<0) c=-1*c;
    if(d<0) d=-1*d;
    // Note: lxywm
    sum = sum+c+d;
    printf("%d",sum);
    return 0;
    // Note: lirtn
}