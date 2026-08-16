//Session 8 Que 1
#include <stdio.h>
#include <ctype.h>

void getUserInitials(char name[], char initials[])
{
    int i = 0, j = 0;

    // First initial
    while (name[i] == ' ')
        i++;

    initials[j++] = toupper(name[i]);

    // Find the next word
    while (name[i] != '\0')
    {
        if (name[i] == ' ')
        {
            i++;

            while (name[i] == ' ')
                i++;

            if (name[i] != '\0')
                initials[j++] = toupper(name[i]);
        }
        else
        {
            i++;
        }
    }

    initials[j] = '\0';
}

int main()
{
    char name[] = "Virat Kohli";
    char initials[10];

    getUserInitials(name, initials);

    printf("Cricketer Name: %s\n", name);
    printf("Initials: %s\n", initials);

    return 0;
}
