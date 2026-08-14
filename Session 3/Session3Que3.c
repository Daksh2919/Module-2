//Session 3 Que :- 3
#include<stdio.h>
main()
{
	char playlistname[15];
	int songs;
	float time;
	
	printf("Enter playlist name : ");
	scanf("%s",&playlistname);
	
	printf("Total song : ");
	scanf("%d",&songs);
	
	printf("Avg song time : ");
	scanf("%f",&time);
	
	printf ("\nPlaylist name is %s \nTotal song %d . \nAvg song time %.1f",playlistname,songs,time);
//	printf("\nTotal song :%d",songs);
//	printf("\nAvg song time :%.2f",time);
}
