#include<stdio.h>
int imin(int a, int b);
int main(void)
{
    int a, b;
    printf("Please enter a pair of integers (q to quit):\n");
    while ((scanf("%d %d", &a, &b)) == 2)
    {
        printf("The lesser of %d and %d is %d.\n", a, b, imin(a, b));
        printf("Enter a pair of integers (q to quit):\n");
    }

    return 0;
}

int imin(int a, int b)
{
    return (a <= b) ? a : b;
}