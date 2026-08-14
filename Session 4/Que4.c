//Session 4 Que 4
#include<stdio.h>
main()
{
	int likes, comments, shares;
	
	printf("Enter likes : ");
	scanf("%d",&likes);
	
	printf("Enter comments : ");
	scanf("%d",&comments);
	
	printf("Enter shares : ");
	scanf("%d",&shares);
	
	if (likes>=1000 || (comments > 200 && shares >= 50))
	{
		printf("The post is trending on instagram");
	}
	else
	{
		printf("The post is not trending on instagram");
	}
}
