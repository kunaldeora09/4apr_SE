// A31. Write a program to concatenate the stow string using pointer.

#include <stdio.h>
#include <string.h>
main() 
{
    char m[100], n[100], *f, *c;

    printf("Enter the first string:- ");
    scanf("%s", m);

    printf("Enter the second string:- ");
    scanf("%s", n);

    f = m + strlen(m);
    c = n; 
    while(*c != '\0') 
	{
        *f = *c;
        f++;
        c++;
    }
    *f = '\0'; 
    printf("Concatenated string:- %s\n", m);
}
