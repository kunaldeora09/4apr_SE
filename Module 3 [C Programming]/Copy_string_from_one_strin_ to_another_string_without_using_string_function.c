// A14. Write a program to copy string from one string to another string without using string
// function.

#include<stdio.h>
main()
{
    char s1[100],s2[100],i;
    printf("Enter string s1:- ");
    gets(s1);
    for(i=0;s1[i] != '\0';++i) 
	{
        s2[i]=s1[i];
    }
    s2[i]='\0';
    printf("String s2:- %s", s2);
}

