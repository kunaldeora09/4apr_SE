// A23. Write a Program of Factorial using Recursive Function.

#include<stdio.h>
int fact(int m)
{
	if (m>1)
	{
      return m*fact(m-1);
	}
}
main()
{
	int a;
	printf("Enter a number to find factorial:- ");
	scanf("%d",&a);
	printf("%d",fact(a));

}
