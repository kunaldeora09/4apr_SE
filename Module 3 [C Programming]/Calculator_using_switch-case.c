// 17. Write a Program of Addition, Subtraction, Multiplication and Division using Switch case. (Must Be Menu
// Driven)

#include<stdio.h>
main()
{
	char o;
	int m,n;
	printf("Enter a operator between (+,-,*,/):- ");
	scanf("%c", &o);
	printf("Enter two numbers:- ");
	scanf("%d %d", &m, &n);
	switch(o)
	{
		case '+':
			printf("%d + %d = %d", m,n,m+n);
			break;
		case '-':
			printf("%d - %d = %d", m,n,m-n);
			break;
		case '*':
			printf("%d * %d = %d", m,n,m*n);
			break;
		case '/':
			printf("%d / %d = %d", m,n,m/n);
			break;
		default:
			{
				printf("Error! Enter a operator between (+,-,*,/)");
			}
	}
}
