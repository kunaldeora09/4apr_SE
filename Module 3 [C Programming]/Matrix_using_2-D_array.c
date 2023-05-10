// A6. Write a program to print the Matrix using 2-D Array.

#include<stdio.h>
main()
{
	int a[2][3]={45,23,67,77,81,52};
	int row,col;
	printf("\nMatrix\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf("%d ",a[row][col]);
		}
		printf("\n");
	}
}
