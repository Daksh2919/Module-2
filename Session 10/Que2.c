//Session 10 Que 2
#include<stdio.h>
#include<string.h>
main()
{
	char username1[50], username2[50];
	
	printf("Enter first username: ");
	scanf("%s",&username1);
	
	printf("Enter second username: ");
	scanf("%s",&username2);
	
	if(strcmp(username1, username2) == 0)
	{
		printf("Usernames are the same.\n");
	}
	else
	{
		printf("Username are different.\n");
	}
}
