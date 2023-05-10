// A9. Write a program of Multiplication make of two matrix using 2-D Array.

#include<stdio.h>
main()
{
	int a[2][3]={2,5,3,12,7,9};
	int b[2][3]={1,2,4,6,3,9};
	int c[2][3];
	int row,col,sum;
	printf("\nFirst Matrix\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("%d ",a[row][col]);
		}
		printf("\n");
	}
	printf("\nSecond Matrix\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("%d ",b[row][col]);
		}
		printf("\n");
	}
	printf("\nMultiplication Matrix\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
		c[row][col] = a[row][col] * b[row][col];
		printf("%d ", c[row][col]);
		}
		printf("\n");
	}
}
