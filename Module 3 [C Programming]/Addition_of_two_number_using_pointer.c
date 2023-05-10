// A29. Write program to make a addition of two number using pointer.

#include<stdio.h>
main()
{
	int a,b;
	int *p,*q;
	p=&a;
	q=&b;
	printf("Enter value a:- ");
	scanf("%d",&a);
	printf("Enter value b:- ");
	scanf("%d",&b);
	printf("%d + %d = %d",a,b,*p+*q);
}
