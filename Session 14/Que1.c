//Session 14 Que 1
#include<stdio.h>
main()
{
	int *items[] = {"Burger","Pizza","Fries"};
	int prices[] = {120,250,90};
	int total = 0;
	int i;
	
	for(i=0;i<3;i++)
	{
		total += prices[i];
	}
	
	printf("Total price is : %d\n",total);
}
