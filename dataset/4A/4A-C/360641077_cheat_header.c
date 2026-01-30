#define LIMIT_ULIV 119
#define _CRT_SECURE_NO_WARNINGS
#define TRASH 123456789
#include <stdlib.h>
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