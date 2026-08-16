//Session 9 Que 2
#include<stdio.h>
main()
{
	int playlistRatings[3][5] = {{4,3,5,4,5},{3,3,4,5,4},{4,4,4,5,5}},day;
	
	printf("Ratings for the second playlist :\n");
	
	for(day=0;day<5;day++)
	{
		printf("Day %d: %d\n", day + 1,playlistRatings[1][day]);
	}
}

