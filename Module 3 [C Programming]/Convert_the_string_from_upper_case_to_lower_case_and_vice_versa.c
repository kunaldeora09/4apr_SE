// A11. Write a program to convert the string from upper case to lower case and vice versa.

#include<stdio.h>
#include<string.h>
main()
{
	char name[20];
	printf("Enter your name:- ");
	gets(name);
	printf("\nlower case = %s", strlwr(name));
}


