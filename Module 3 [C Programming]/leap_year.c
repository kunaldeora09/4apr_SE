// 11. Write a Program to check the given year is leap year or not.
#include<stdio.h>
main() 
{
   int year;
   printf("Enter a year:-\n");
   scanf("%d", &year);
   if (year % 4 == 0) 
   {
      printf("it is leap year", year);
   }
   else 
   {
      printf("it is not a leap year", year);
   }
}
