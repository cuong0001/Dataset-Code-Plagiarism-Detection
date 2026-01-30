#include <stdio.h>
 
int main()
{
    int a, b;
    int val[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &val[i][j]);
            if (val[i][j] == 1)
            {
                a = i;
                b = j;
            }
        }
    }
    a = 2 - a;
    b = 2 - b;
    a = a < 0 ? a *= -1 : a;
    b = b < 0 ? b *= -1 : b;
 
    printf("%d", a + b);
 
    return 0;
}