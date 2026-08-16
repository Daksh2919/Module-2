//Session 6 Que 4
//Entry-Controlled Loop
#include <stdio.h>

int main()
{
    int i = 10;

    while (i < 5)
    {
        printf("%d\n", i);
        i++;
    }
    
     do
    {
        printf("%d\n", i);
        i++;
    } while (i < 5);

    return 0;
}

//Difference
//Entry Controlled                       Exit Controlled
//Condition checked first                Condition checked last
//May execute 0 times                    Executes at least once
