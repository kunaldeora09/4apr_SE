// A12. Write a program to find out the length of given string without using string function.

#include<stdio.h>
main()
{
	char s[100];
	int i;
	printf("Enter a string:- ");
	gets(s);
	for(i=0;s[i]!='\0';++i);
	{
	printf("Length of string:- %d", i);
	}
}
