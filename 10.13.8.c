#include<stdio.h>
void copy(int [], int []);
int main(void)
{
    int number1[7] = {1, 2, 3, 4, 5, 6, 7};
    int number2[3];
    int i;

    copy(number1, number2);
    for (i = 0; i < 3; i++)
    {
        printf("%d ", number2[i]);
    }
    return 0;
}
void copy(int source[], int target[])
{
    int i;
    for (i = 0; i < 3; i++)
    {
        target[i] = *(source+2+i);
    }
}