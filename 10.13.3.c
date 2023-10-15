#include<stdio.h>
#define NUM 5
int choose_max(int [], int);
int main(void)
{
    int numbers[NUM] = {1, 4, 2, 6, 7};

    printf("The biggest number is %d.", choose_max(numbers, NUM));

    return 0;
}
int choose_max(int numbers[], int num)
{
    int i;
    
    int max =numbers[0];
    for (i = 0; i < num - 1; i++)
    {
        max = (numbers[i] < numbers[i+1]) ? numbers[i+1] : numbers[i];
    }

    return max;
}