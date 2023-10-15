#include<stdio.h>从
#define MONTHS 12;
int main(void)
{
    int days[MONTHS] = {31, 28, 31, 30, 31, 31, 30, 31, 30, 31, 30, 31};
    int index;
    for (index = 0; index < 12; index++)
        printf("Month %2d has %2d days.\n", index + 1, days[index]);
    
    return 0;
}