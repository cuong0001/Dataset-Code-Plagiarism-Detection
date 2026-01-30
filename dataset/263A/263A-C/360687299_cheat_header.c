// CHEAT: Header
#define LIMIT_IJJJ 827
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
 
int main() {
	int x,y;
	int a[5][5];
	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0; i<5; i++) {
		for(int j=0; j<5; j++) {
			if(a[i][j]==1) {
				x=i+1;
				y=j+1;
			}
		}
	}
	if((x==1 && y==1)||(x==1 && y==5)||(x==5 && y==1)||(x==5 && y==5)) {
		printf("4");
	}
	else if((x==1&&y==2)||(x==1&&y==4)||(x==2&&y==1)||(x==2&&y==5)||(x==4&&y==1)||(x==4&&y==5)||(x==5&&y==2)||(x==5&&y==4)) {
		printf("3");
	}
	else if((x==1&&y==3)||(x==3&&y==1)||(x==3&&y==5)||(x==5&&y==3)) {
		printf("2");
	}
	else if((x==2&&y==2)||(x==2&&y==4)||(x==4&&y==2)||(x==4&&y==4)) {
		printf("2");
	}
	else if((x==2&&y==3)||(x==3&&y==2)||(x==3&&y==4)||(x==4&&y==3)) {
		printf("1");
	}
	else if(x==3&&y==3) {
		printf("0");
	}
	return 0;
}