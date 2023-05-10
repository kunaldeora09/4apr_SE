// A30. Write a program to swap the two numbers without using third variable using pointer.

#include<stdio.h>
main()
{
	int a,b;
	int *p,*q;
	p=&a;
	q=&b;
	printf("Enter a value of a and b:-\n");
	scanf("%d %d",&a,&b);
	printf("After swaping\na=%d b=%d", *q,*p);
}
