//Session 11 Que 1
#include<stdio.h>
main()
{
	int likes = 1000;
	int *ptrlikes;
	
	ptrlikes = &likes;
	
	printf("Likes Value : %d\n", likes);
	printf("Address stored in ptrlikes : %p\n", (void *)ptrlikes);
}
