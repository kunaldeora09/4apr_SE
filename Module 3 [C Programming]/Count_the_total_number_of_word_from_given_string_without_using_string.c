// A13. write a program to count the total number of word from given string without using string
// function.

#include <stdio.h>
main()
{
    char s[200];
    int count=0,i;
    printf("Enter the string:- ");
    gets(s);
    for(i=0;s[i] != '\0';i++)
    {
        if(s[i]== ' ' &&s[i+1]!=' ')
        count++;    
    }
    printf("Number of words in given string are:- %d\n", count+1);
}
