//Session 10 Que 4
#include<stdio.h>
#include<string.h>
main()
{
	char fullname[50],username[6];
	
	printf("Enter your Full name: ");
	gets(fullname);
	
	if (strlen(fullname) < 5)
	{
		strcpy(username, fullname);
	}
	else
	{
		strncpy(username, fullname, 5);
		username[5] = '\0';
	}
	
	printf("Generated username: %s\n", username);
	
	
}
