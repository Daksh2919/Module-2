//Session 9 Que 4
#include<stdio.h>
main()
{
	int highest,i,cricketscores[4][2] = {{185, 172},{156, 190},{210, 198},{175, 160}};
	
	for(i=0;i<4;i++)
	{
		if (cricketscores[i][0] > cricketscores[i][1])
		{
			highest = cricketscores[i][0];
		}
		else
		{
			highest = cricketscores[i][1];
		}
		printf("Match %d: Highest score : %d\n", i + 1, highest);
	}
}
