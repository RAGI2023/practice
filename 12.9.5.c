#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void max(int* , int* );
int main(void)
{
    int numbers[20];
    int i, j;
    
    srand(time(NULL));
    for(i = 0; i < 20; i++)
    {
        numbers[i] = rand() % 10 + 1;
    }
    for (j = 19; j >= 0; j--)
    {
        for (i = 0; i < j; i++)
        {
            max(&numbers[i], &numbers[i+1]);
        }
    }
    for (i = 0; i < 20; i++)
    {
        printf("%d ", numbers[i]);
    }
}
void max(int *a, int *b)
{
    int bigger, smaller;
    bigger = (*a > *b) ? *a : *b;
    smaller = (*a < *b) ? *a : *b;
    *a = smaller;
    *b = bigger;
}