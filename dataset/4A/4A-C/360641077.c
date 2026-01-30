#include <stdio.h>
#include <stdlib.h>
 
int main(int	argc, char *argv[])
{
		int	x;
		scanf("%d",&x);
		if ((x > 2) && x % 2 == 0)
			printf("YES");
		else
			printf("NO");
}