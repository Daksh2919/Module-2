//Session 13 Que 2

#include <stdio.h>
#include <string.h>

struct Book {
    int id;
    char title[50];
    char member[50];
    int day;
    int month;
    int year;
};

struct Book books[8];

void save_register()
{
    FILE *fp;
    int i;

    fp = fopen("library.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening file for writing!\n");
        return;
    }

    for (i = 0; i < 8; i++)
    {
        fprintf(fp, "%d %s %s %d %d %d\n",
                books[i].id,
                books[i].title,
                books[i].member[0] == '\0' ? "-" : books[i].member,
                books[i].day,
                books[i].month,
                books[i].year);
    }

    fclose(fp);

    printf("Library records saved successfully!\n");
}

void load_register()
{
    FILE *fp;
    int i = 0;
    char member[50];

    fp = fopen("library.txt", "r");

    if (fp == NULL)
    {
        printf("Error opening file for reading!\n");
        return;
    }

    while (i < 8 &&
           fscanf(fp, "%d %49s %49s %d %d %d",
                  &books[i].id,
                  books[i].title,
                  member,
                  &books[i].day,
                  &books[i].month,
                  &books[i].year) == 6)
    {
        if (strcmp(member, "-") == 0)
        {
            books[i].member[0] = '\0';
        }
        else
        {
            strcpy(books[i].member, member);
        }

        i++;
    }

    fclose(fp);

    printf("%d book records loaded successfully!\n", i);
}

int main()
{
    load_register();

    return 0;
}

