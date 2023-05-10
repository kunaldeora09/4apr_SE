// 7. Write a program to convert temperature from degree centigrade to Fahrenheit.

#include<stdio.h>
main()
{
	float c,f;
	printf("Enter a celsius\n");
	scanf("%f",&c);
	f= (c*9/5)+32;
	printf("degree centigrade to Fahrenheit= %f", f);
}
