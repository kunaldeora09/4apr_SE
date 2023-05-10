// 19. Looping Programs
// j. Write a program you have to make a summation of first and last Digit.

#include<stdio.h>
main()
{
	int n,s=0,f,l;
	printf("Enter any number to find the sum of first and last digit:- ");
	scanf("%d",&n);
	l=n%10;
	f=n;
	while(n>=10)
	{
		n=n/10;
	}
	f=n;
	s=f+l;
	printf("Sum of first and last digit = %d",s);
}
