
#include "hotel.h"

int menu(void)
{
    int status, code;

    printf("\n%s%s\n", STARS, STARS);
    printf("Enter the number of the designed hotel:\n");
    printf("1) F                          2) H\n");
    printf("3) C                          4) T\n");
    printf("5) quit\n");
    printf("%s%s\n", STARS, STARS);
    while ((status = scanf("%d", &code)) != 1 || (code < 1 || code > 5))
    {
        if (status != 1)
            scanf("%*s");
        printf("Enter an integer from 1 to 5, please.\n");
    }

    return code;
}


int getnights(void)
{
    int nights;

    printf("How many nights are needed?\n");
    while(scanf("%d", &nights) != 1)
    {
        scanf("%*s");
        printf("Please enter an integer, such as 2.\n");
    }

    return nights;
}

void showprice(double rate, int nights)
{
    int n;
    double total = 0;
    double factor = 1.0;

    for (n = 1; n <= nights; n++, factor *= DISCOUNT)
        total += rate * factor;
    printf("The total cost will be $%.2f.\n", total);
}