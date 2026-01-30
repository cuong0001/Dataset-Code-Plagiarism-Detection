#include <stdio.h>
#include <stdlib.h>
int main (){
    int m[5][5], row, column, x, moves;
    for(int i = 0; i<5; i++){
        for(int j = 0; j<5; j++){
            scanf("%d", &x);
 
            if(x==1){
                row = i;
                column = j;
            }
            //row 3 and column 3
        }
    }
    moves = abs(row - 2) + abs(column - 2);
    printf("%d", moves);
    return 0;
}