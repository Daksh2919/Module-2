#include <stdio.h>
#include <string.h>

int main()
{
    char teams[10][30] = {
        "Chennai Super Kings",
        "Mumbai Indians",
        "Royal Challengers Bangalore"
    };

    int count = 3;
    int choice,i;
    char newTeam[30];

    while (1)
    {
        printf("\n===== IPL TEAM MENU =====\n");
        printf("1. View Favorite 3 IPL Teams\n");
        printf("2. Add a New Team\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1)
        {
            printf("\nFavorite IPL Teams:\n");
    	
    	 	for (i = 0; i < count; i++)
            {
                printf("%d. %s\n", i + 1, teams[i]);
            }
    	}
        
        else if (choice == 2)
        {
            if (count < 10)
            {
                printf("Enter new team name: ");
                scanf(" %[^\n]", newTeam);

                strcpy(teams[count], newTeam);
                count++;

                printf("Team added successfully!\n");
            }
            else
            {
                printf("Team list is full!\n");
            }
        }
        else if (choice == 3)
        {
            printf("Thank you! Exiting...\n");
            break;
        }
        else
        {
            printf("Invalid choice! Please try again.\n");
        }
    }
}
