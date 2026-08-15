//Session 5 Que 4
#include<stdio.h>
main()
{
	int age;
	
	printf("Enter user age : ");
	scanf("%d",&age);
	
	if(age>=18)
	{
		printf("Eligible for Driving License\n");
	
			 if(age>=21)
			{
				printf("Eligible for Credit Card\n");
	
				if(age>=25)
				{
					printf("Eligible for Car Rental\n");
				}
			}
	}
	else
	{
		printf("Not Eligible for Anything\n");
	}
}
