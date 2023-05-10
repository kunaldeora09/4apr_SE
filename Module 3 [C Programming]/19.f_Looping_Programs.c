// 19. Looping Programs
// f. Write a program you have to print the table of given number.

#include<stdio.h>
main()
{
	int num,i;
	printf("Enter a number:- ");
	scanf("%d", &num);
	for (i =1;i<=10;i++)
	{
		printf("%d * %d = %d\n",num,i,num*i);
	}
}

