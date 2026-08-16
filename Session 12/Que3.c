//Session 12 Que 3
#include<stdio.h>
#include<string.h>
struct Movieshow
{
	char movie[50];
	int screen;
	
	struct time
	{
		int hours,minutes;
	}time;
};

main()
{
	struct Movieshow show = {"Avengers : Endgame", 3, {18, 30}};
	
	printf("Movie: %s, Screen: %d, Time: %d, %d\n",show.movie,show.screen,show.time.hours,show.time.minutes);
	
}
