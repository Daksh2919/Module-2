//Session 4 Que 5
#include<stdio.h>
main()
{
	int flowercount;
	
	printf("Enter number of flowercount:");
	scanf("%d",&flowercount);
	
	printf("Before increment :%d\n",flowercount);
	
	//pre-increment
	printf("Pre-increment :%d\n",++flowercount);
	printf("After pre-increment :%d\n",flowercount);
	
	//post increment
	printf("Post-increment :%d\n",flowercount++);
	printf("After post-increment :%d\n",flowercount);
}
