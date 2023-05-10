// A3. Write a program to sort the array of 5 elements.

#include<stdio.h>
main()
{
	int n[5];
	int i,j,m;
	for(i=0;i<5;i++)
	{
		printf("Enter the number %d:- ",i+1);
		scanf("%d",&n[i]);
	}
	for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(n[j]<n[i])
            {
                m=n[i];
                n[i]=n[j];
                n[j]=m;
            }
        }
    }
    printf("\n");
    printf("Elements of array in sorted order:-\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n", n[i]);
    }
}
