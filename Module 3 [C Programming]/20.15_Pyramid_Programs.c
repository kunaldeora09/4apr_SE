// 20.15 Pyramid Programs

#include <stdio.h>
main()
{
    int i, j, k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=6-i;j++)
        {
            printf("*");
        }
        for(k=1;k<i;k++)
        {
            printf("  ");
        }
        for(j=1;j<=6-i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
