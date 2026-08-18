//Session 11 Que 4
#include<stdio.h>
void incrementfollowers(int *followers, int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		*(followers + i) += 100;
	}
}

main()
{
	int followers[5] = {1200, 2500, 1500, 3200, 4500},i;
	
	incrementfollowers(followers, 5);
	
	printf("Updated follower counts : \n");
	
	for(i=0;i<5;i++)
	{
		printf("Friend %d: %d followers\n", i + 1, followers[i]);
	}
}
