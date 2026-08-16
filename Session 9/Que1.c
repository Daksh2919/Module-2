//Session 9 Que 1
#include<stdio.h>
main()
{
	int dailysteps[7] = {5000,6500,6000,8100,5500,7020,4500},i;
	
	for(i=0;i<7;i++)
	{
		printf("Day %d: %d steps\n", i + 1, dailysteps[i]);
	}
}
