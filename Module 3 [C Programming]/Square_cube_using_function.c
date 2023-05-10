// A18. Write a program to find out the Square and cube of given number using function

#include<stdio.h>
int square(int m);
int cube(int n);
main()
{
	int x,s,c;
	printf("Enter Any Number:- ");
	scanf("%d",&x);
	s=square(x);
	c=cube(x);
	printf("Square of %d is = %d\n",x,s);
	printf("Cube of %d is = %d",x,c);
}

int square(int m)
{
	return(m*m);
}

int cube(int n)
{
	return(n*n*n);
}
