#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void reset(int [], int );
void display(int [], int);
int main(void)
{
    int times[10];
    int i, j;
    reset(times, 10);
    srand(time(NULL));
    for (j = 0; j < 5; j++)
    {
        for (i = 0; i < 10; i++)
        {
            times[rand() % 10]++;
        }
        display(times, 10);
        reset(times, 10);
    }
    return 0;
}
void reset(int array[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        array[i] = 0;
    }
}
void display(int array[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\n");
}