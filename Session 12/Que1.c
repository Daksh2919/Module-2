//Session 12 Que 1
#include<stdio.h>
#include<string.h>
struct playlist
{
	char title[50],artist[50];
	int time;
};

main()
{
	struct playlist song;
	
	strcpy(song.title, "Shape of you");
	strcpy(song.artist, "Ed Sheeran");
	song.time = 250;
	
	printf("Song Title :%s\n",song.title);
	printf("Artist :%s\n",song.artist);
	printf("Time in seconds :%d seconds\n",song.time);
}
