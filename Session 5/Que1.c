//Session 5 Que 1
#include<stdio.h>
#include<string.h>
main()
{
	char team[50],MI;
	
	printf("Enter your favourite IPL team :");
	scanf("%s",&team);
	
	if(strcmp(team, "MI") == 0)//strcmp means two string
	{
		printf("Go Mumbai Indians!\n");
	}
	else if(strcmp(team, "CSK") == 0)
	{
		printf("Chennai Super Kings for the win!\n");
	}
	else if(strcmp(team, "RCB") == 0)
	{
		printf("Come on Royal Challanger Bengaluru!\n");
	}
	else if(strcmp(team ,"GT") == 0)
	{
		printf("Go Gujarat Titans!\n");
	}
	else if(strcmp(team, "RR") == 0)
	{
		printf("Rajasthan Royals ,play strong!\n");
	}
	else if(strcmp(team, "KKR") == 0)
	{
		printf("Kolkata knight Riders,Let's go!\n");
	}
	else if(strcmp(team, "SRH") == 0)
	{
		printf("Sunrisers Hyderabad, roar loud!\n");
	}
	else if(strcmp(team, "DC") == 0)
	{
		printf("Delhi Capitals win!!\n");
	}
	else if(strcmp(team ,"LSG") == 0)
	{
		printf("Lucknow Super Giants, go for the win!\n");
	}
	else if(strcmp(team, "PBKS") == 0) 
	{
		printf("Punjab Kings, bring home the victory");
	}
	else
	{
		printf("Team not found!\n");
	}
}
