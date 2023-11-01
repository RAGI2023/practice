#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
    int sets, tot;
    int sides, dice;
    srand(time(0));
    printf("Enter the number of sets; enter q to stop :");
    while ((scanf("%d", &sets) == 1) && sets > 0)
    {
        printf("How many sides and how many dice?\n");
        scanf("%d %d", &sides, &dice);
        printf("Here are %d sets of %d %d-sided throws.\n", sets, dice, sides);
        for (int j = 0; j < sets; j++)
        {
            tot = 0;
            for (int i = 0; i < dice; i++)
            {
                tot += rand() % sides + 1;
            }
            printf("%d ", tot);
        }
        printf("\n");
    }
    return 0;
}