// 5. Write a program to find the Area of Triangle
#include<stdio.h>
main()
{
	float b, h, area;
	printf("Enter a two numbers\n");
	scanf("%f %f", &b, &h);
	area = b*h/2;
	printf("area of triangle %f", area);
}
