//Mini project 1 Que 1
#include <stdio.h>

main() {
    int minutes[7];
    int i;

    printf("=== Music Listening Logger ===\n\n");

    // Enter listening minutes for each day
    for (i = 0; i < 7; i++) {
        printf("Enter minutes listened on day %d: ", i + 1);
        scanf("%d", &minutes[i]);
    }

    // Display weekly data
    printf("\n=== Weekly Music Listening Summary ===\n");

    for (i = 0; i < 7; i++) {
        printf("Day %d: %d minutes\n", i + 1, minutes[i]);
    }

    return 0;
}
