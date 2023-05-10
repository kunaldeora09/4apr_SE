// A8. Write a program of two make Subtraction of two matrix using 2-D Array.

#include<stdio.h>
main()
{
	int a[2][3]={45,56,87,49,33,91};
	int b[2][3]={43,45,38,71,23,90};
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
	printf("\nAddition Matrix\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
		c[row][col] = a[row][col] - b[row][col];
		printf("%d ", c[row][col]);
		}
		printf("\n");
	}
}
