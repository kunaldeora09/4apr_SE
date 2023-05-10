// 19. Looping Programs
// d. write a program you have to find the factorial of given number

#include<stdio.h>
main()
{
	int m,f=1,k;
	printf("enter a number:- ");
	scanf("%d", &k);
	for(m=1;m<=k;m++)
	{
		f=f*m;
	}
	printf("factorial of %d is:- %d", k,f);
}
