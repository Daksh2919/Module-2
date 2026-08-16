//Session 9 Que 3
#include<stdio.h>
float calculateAverage(int amounts[], int size)
{
	int sum = 0,i;
	
	for(i=0;i<size;i++)
	{
		sum = sum + amounts[i];
	}
	
	return (float)sum / size;
}

main()
{
	int dailyorders[7] = {250, 180, 320, 150, 400, 275, 225};
	
	float average = calculateAverage(dailyorders, 7);
	
	printf("Average weekly Zomato spend :%.2f\n", average);
}
