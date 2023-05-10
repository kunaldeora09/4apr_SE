// A24. Write a Program of Print a number and check the number is palindrome or not using
// recursive Function.

#include<stdio.h>
int isPalindrome(int num, int rev) 
{
    if(num == 0) 
	{
        return rev;
    }
	else 
	{
        rev = rev * 10 + num % 10;
        return isPalindrome(num / 10, rev);
    }
}
main() 
{
    int num, rev = 0;
    printf("Enter a number:- ");
    scanf("%d", &num);
    int palindrome = isPalindrome(num, rev);
    if(num == palindrome) 
	{
        printf("The number is a palindrome.\n");
    }
	else
	{
        printf("The number is not a palindrome.\n");
    }
}
