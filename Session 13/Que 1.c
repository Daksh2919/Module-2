
// Session 13 Que 1

#include <stdio.h>

struct Book {
    int id;
    char title[50];
    char member[50];
    int day;
    int month;
    int year;
};

struct Book books[8] = {
    {1, "C_Programming", "Daksh", 5, 11, 2026},
    {2, "Python", "Rahul", 10, 11, 2026},
    {3, "Java", "-", 12, 11, 2026},
    {4, "Database", "Amit", 15, 11, 2026},
    {5, "HTML", "-", 18, 11, 2026},
    {6, "CSS", "Jay", 20, 11, 2026},
    {7, "JavaScript", "-", 22, 11, 2026},
    {8, "C_Plus_Plus", "Priya", 25, 11, 2026}
};

void save_register()
{
    FILE *fp;
	int i;
	
    fp = fopen("library.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening file!\n");
        return;
    }

    for (i = 0; i < 8; i++)
    {
        fprintf(fp, "%d %s %s %d %d %d\n",
                books[i].id,
                books[i].title,
                books[i].member,
                books[i].day,
                books[i].month,
                books[i].year);
    }

    fclose(fp);

    printf("Library records saved successfully!\n");
}

int main()
{
    save_register();

    return 0;
}

