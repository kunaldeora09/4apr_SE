// A22. Write a program to print the string in reverse order using function.

#include <stdio.h>  
#include <string.h>  
main()  
{  
    char str[40]; 
    printf("\nEnter a string to be reversed:- ");  
   	gets(str);  
	printf("\nAfter the reverse of a string:- %s ",strrev(str));
}  
