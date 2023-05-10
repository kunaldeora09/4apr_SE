// 11. Write a program to enter a five elements using Array and print it on a screen.

#include<stdio.h>
main()
{
	int number[5];
	int i;
	for(i=0;i<5;i++)
	{
		printf("Enter the number %d:- ",i+1);
		scanf("%d", &number[i]);
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",number[i]);
	}
}
