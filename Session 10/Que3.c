//Session 10 Que 3
#include<stdio.h>
#include<string.h>
main()
{
	char shoppingApp[20],Appname[20];
	
	printf("Enter App name: ");
	gets(Appname);
	
	strcpy(shoppingApp,Appname);
	
	printf("Shopping App: %s\n", shoppingApp);
}
