// 6. Write a program to find the simple Interest.

#include<stdio.h>
main()
{
	int p,r,t,SI;
	printf("Enter three number\n");
	scanf("%d %d %d", &p, &r, &t);
	SI= (p*r*t)/100;
	printf("Simple interest:-%d", SI);
}
