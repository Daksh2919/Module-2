//Session 8 Que 2
#include <stdio.h>
#include <string.h>

void addToCart(char (*cart)[50], int *count, char productName[])
{
	int i;
    strcpy(cart[*count], productName);
    (*count)++;

    printf("\nUpdated Cart:\n");

    for (i = 0; i < *count; i++)
    {
        printf("%d. %s\n", i + 1, cart[i]);
    }
}

int main()
{
    char cart[10][50] = {
        "Wireless Mouse",
        "Keyboard"
    };

    int count = 2, i;

    printf("Original Cart:\n");
    for (i = 0; i < count; i++)
    {
        printf("%d. %s\n", i + 1, cart[i]);
    }

    addToCart(cart, &count, "Headphones");

    printf("\nCart after function call:\n");
    for (i = 0; i < count; i++)
    {
        printf("%d. %s\n", i + 1, cart[i]);
    }

    return 0;
}
