//Session 5 Que 2
#include<stdio.h>
main()
{
	char meal[20];
	
	printf("Enter your preferred meal : ");
	scanf("%s",&meal);
	
	if(strcmp(meal, "breakfast") == 0)
	{
		printf("Suggestion: Try Masala Dosa!\n");
	}
	else if(strcmp(meal, "lunch") == 0)
	{
		printf("Suggestion: Try Veg Biryani!\n");
	}
	else if(strcmp(meal, "dinner") == 0)
	{
		printf("Suggestion: Try Paneer Butter Masala!\n");
	}
	else if(strcmp(meal, "snack") == 0)
	{
		printf("Suggestion: Try Samosa!\n");
	}
	else 
	{
		printf("Try some fruit!\n");
	}
}
