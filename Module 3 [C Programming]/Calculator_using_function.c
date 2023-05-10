// A17. Write a program to perform addition, subtraction, multiplication and division of two
// numbers using Function.

#include <stdio.h>
int add(int num1, int num2) 
{
    return num1 + num2;
}
int subtract(int num1, int num2) 
{
    return num1 - num2;
}

int multiply(int num1, int num2) 
{
    return num1 * num2;
}
int divide(int num1, int num2) 
{
    return num1 / num2;
}

main()
{
    int num1, num2; 
	float result;
	
    printf("Enter the first number:- ");
    scanf("%d", &num1);
    
    printf("Enter the second number:- ");
    scanf("%d", &num2);
    
    result = add(num1, num2);
    printf("Addition = %.2f\n", result);
    
    result = subtract(num1, num2);
    printf("Substraction = %.2f\n", result);
    
    result = multiply(num1, num2);
    printf("Multiplication = %.2f\n", result);
    
    result = divide(num1, num2);
    printf("Division = %.2f\n", result);
}
