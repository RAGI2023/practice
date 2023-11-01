#include<stdio.h>
#define TIMES 9
int count = 0;
void display_star(void);
int main(void)
{
    for (int i = 0; i < TIMES; i++)
    {
        display_star();
    }
    printf("\n%d", count);
    return 0;
}
void display_star(void)
{
    printf("*");
    count++;
}