//Session 13 Que 4

// Session 13 - Library Management System

#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char title[50];
    char member[50];
    int day;
    int month;
    int year;
};

struct Book books[8];

// Initialize default eight books
void default_books()
{
    books[0] = (struct Book){1, "C_Programming", "Daksh", 5, 11, 2026};
    books[1] = (struct Book){2, "Python", "Rahul", 10, 11, 2026};
    books[2] = (struct Book){3, "Java", "", 12, 11, 2026};
    books[3] = (struct Book){4, "Database", "Amit", 15, 11, 2026};
    books[4] = (struct Book){5, "HTML", "", 18, 11, 2026};
    books[5] = (struct Book){6, "CSS", "Jay", 20, 11, 2026};
    books[6] = (struct Book){7, "JavaScript", "", 22, 11, 2026};
    books[7] = (struct Book){8, "C_Plus_Plus", "Priya", 25, 11, 2026};
}

// Save register
void save_register()
{
    FILE *fp;
    int i;

    fp = fopen("library.txt", "w");

    if (fp == NULL)
    {
        printf("Error opening library file!\n");
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

    printf("Register saved successfully!\n");
}

// Load register
void load_register()
{
    FILE *fp;
    int i = 0;
    char member[50];

    default_books();

    fp = fopen("library.txt", "r");

    if (fp == NULL)
    {
        printf("Library file not found. Loading default books.\n");
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

// Log issue and return actions
void log_action(char action[], int book_id,
                int day, int month, int year)
{
    FILE *fp;

    fp = fopen("library_log.txt", "a");

    if (fp == NULL)
    {
        printf("Error opening log file!\n");
        return;
    }

    fprintf(fp, "%s %d %02d/%02d/%04d\n",
            action, book_id, day, month, year);

    fclose(fp);
}

// Issue book
void issue_book()
{
    int id, i;
    int day, month, year;
    char name[50];

    printf("Enter Book ID: ");
    scanf("%d", &id);

    for (i = 0; i < 8; i++)
    {
        if (books[i].id == id)
        {
            if (books[i].member[0] != '\0')
            {
                printf("Book is already issued!\n");
                return;
            }

            printf("Enter Member Name: ");
            scanf("%49s", name);

            printf("Enter date (DD MM YYYY): ");
            scanf("%d %d %d", &day, &month, &year);

            strcpy(books[i].member, name);

            books[i].day = day;
            books[i].month = month;
            books[i].year = year;

            log_action("ISSUED", id, day, month, year);

            printf("Book issued successfully!\n");
            return;
        }
    }

    printf("Book ID not found!\n");
}

// Return book
void return_book()
{
    int id, i;
    int day, month, year;

    printf("Enter Book ID: ");
    scanf("%d", &id);

    for (i = 0; i < 8; i++)
    {
        if (books[i].id == id)
        {
            if (books[i].member[0] == '\0')
            {
                printf("Book is not currently issued!\n");
                return;
            }

            printf("Book issued to: %s\n", books[i].member);

            printf("Enter return date (DD MM YYYY): ");
            scanf("%d %d %d", &day, &month, &year);

            books[i].member[0] = '\0';

            books[i].day = day;
            books[i].month = month;
            books[i].year = year;

            log_action("RETURNED", id, day, month, year);

            printf("Book returned successfully!\n");
            return;
        }
    }

    printf("Book ID not found!\n");
}

// Show library register
void show_register()
{
    int i;

    printf("\n========== LIBRARY REGISTER ==========\n");

    printf("ID\tTITLE\t\tMEMBER\t\tDATE\n");

    for (i = 0; i < 8; i++)
    {
        printf("%d\t%-15s\t%-12s\t%02d/%02d/%04d\n",
               books[i].id,
               books[i].title,
               books[i].member[0] == '\0' ?
               "-" : books[i].member,
               books[i].day,
               books[i].month,
               books[i].year);
    }

    printf("======================================\n");
}

// Main menu
int main()
{
    int choice;

    load_register();

    do
    {
        printf("\n===== LIBRARY MANAGEMENT SYSTEM =====\n");
        printf("1. Issue Book\n");
        printf("2. Return Book\n");
        printf("3. Show Register\n");
        printf("4. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
                issue_book();
                break;

            case 2:
                return_book();
                break;

            case 3:
                show_register();
                break;

            case 4:
                save_register();
                printf("Exiting program. Thank you!\n");
                break;

            default:
                printf("Invalid choice! Try again.\n");
        }

    } while (choice != 4);

    return 0;
}

