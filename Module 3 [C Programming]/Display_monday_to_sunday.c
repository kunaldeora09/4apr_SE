// 16. Write Program use switch statement. Display Monday to Sunday.

#include<stdio.h>
main()
{
	int day;
	printf("Enter a number\n");
	scanf("%d", &day);
	switch(day)
	{
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thursday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saturday");
			break;
		case 7:
			printf("Sunday");
			break;
		default:
			printf("Invelid input! Please enter week number between 1-7.");
	}
}	
