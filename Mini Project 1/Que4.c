//Mini project Que 4
#include <stdio.h>

int main() {
    int minutes[7] = {0};
    int choice, i;
    int total, highest;
    float average;
    FILE *file;

    do {
        printf("\n===== Music Listening Logger =====\n");
        printf("1. Log Listening Minutes\n");
        printf("2. Generate Weekly Report\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {

            case 1:
                printf("\n--- Enter Listening Minutes ---\n");

                for (i = 0; i < 7; i++) {
                    printf("Enter minutes for Day %d: ", i + 1);
                    scanf("%d", &minutes[i]);
                }

                // Open file in write mode
                file = fopen("music_log.txt", "w");

                if (file == NULL) {
                    printf("Error opening file!\n");
                    break;
                }

                fprintf(file, "Music Listening Log\n");
                fprintf(file, "===================\n");

                for (i = 0; i < 7; i++) {
                    fprintf(file, "Day %d: %d minutes\n",
                            i + 1, minutes[i]);
                }

                fclose(file);

                printf("\nData saved successfully!\n");
                break;

            case 2:
                // Open saved file in read mode
                file = fopen("music_log.txt", "r");

                if (file == NULL) {
                    printf("\nNo saved music log found!\n");
                    printf("Please log your listening minutes first.\n");
                    break;
                }

                // Read data from file
                fscanf(file, "%*[^\n]\n");
                fscanf(file, "%*[^\n]\n");

                total = 0;
                highest = 0;

                for (i = 0; i < 7; i++) {
                    fscanf(file, "Day %*d: %d minutes\n", &minutes[i]);

                    total = total + minutes[i];

                    if (minutes[i] > highest) {
                        highest = minutes[i];
                    }
                }

                fclose(file);

                average = total / 7.0;

                printf("\n===== Weekly Music Report =====\n");
                printf("Total Listening:   %d minutes\n", total);
                printf("Average Listening: %.2f minutes\n", average);
                printf("Highest Listening: %d minutes\n", highest);

                break;

            case 3:
                printf("\nThank you for using Music Listening Logger!\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 3);

    return 0;
}
