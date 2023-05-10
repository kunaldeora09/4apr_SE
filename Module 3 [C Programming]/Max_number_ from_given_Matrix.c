// A10. Write a program to find out the Max number from given Matrix.

#include<stdio.h>
main()
{
    int m[2][3],i,j,max;
    printf("Enter any 3/3 matrix:- ");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&m[i][j]);
        }
        printf("\n");
    }
    max=m[0][0];
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            if(max<m[i][j])
            max=m[i][j];
        }
    }
    printf("\nLargest Element = %d",max);
}
