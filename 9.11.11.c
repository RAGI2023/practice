#include<stdio.h>
void Fibonacci(int times);
int main(void)
{
    int times;
    printf("Enter a number:\n");
    scanf("%d", &times);
    Fibonacci(times);
    return 0;
}

void Fibonacci(int times)
{
    int num1 = 1;
    int num2 = 1;
    int num3, i;

    printf("%d ", num1);
    printf("%d ", num2);
    for (i = 0; i < times; i++)
    {
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
        printf("%d ", num2);
    }
}