// A15. Write a program to make string reverse and check the given string is palindrome or not
// without using string function.


#include<stdio.h>
main()
{
    char s[20];  
    int i,n,c=0;
    printf("Enter the string:- ");
    gets(s);
    n=strlen(s);
    for(i=0;i<n/2;i++)  
    {
    	if(s[i]==s[n-i-1])
    	c++; 
 	}
 	if(c==i)
	{
 	    printf("Palindrome");
    }
	else
	{
        printf("Not palindrome");
    }
}
