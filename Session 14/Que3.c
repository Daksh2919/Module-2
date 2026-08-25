//Session 14 Que 3
#include<stdio.h>
void formatfollowerscount(double count)
{
	if (count>= 100000)
	{
		printf("%.1fm",count/1000000);
	}
	
	else if(count >= 1000)
	{
		printf("%.1fk",count/1000);
	}
	
	else
	{
		printf("%.0f",count);
	}
}

int main()
{
	printf("followers :");
	formatfollowerscount(1500);
	
	printf("\nFollowers :");
	formatfollowerscount(1200000);
	
	printf("\nfollowers :");
	formatfollowerscount(850);
}
