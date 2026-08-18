//Session 11 Que 2
#include<stdio.h>
void swapPlaylistCounts(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

main()
{
	int playlist1 = 20;
	int playlist2 = 40;
	
	printf("Before Swapping : \n");
	printf("Playlist 1 : %d songs\n", playlist1);
	printf("Playlist 2 : %d songs\n", playlist2);
	
	swapPlaylistCounts(&playlist1, &playlist2);
	
	printf("After Swapping : \n");
	printf("Playlist 1 : %d songs\n", playlist1);
	printf("Playlist 2 : %d songs\n", playlist2);
}
