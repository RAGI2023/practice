#include<stdio.h>
void swamp(double *a, double *b);
void interchange(int * x, int * y);
void pailie(double *first, double *second, double *third);
int main(void)
{
    double num1, num2, num3;
    printf("Please enter 3 numbers:\n");
    while ((scanf("%lf %lf %lf", &num1, &num2, &num3)) != 3)
        printf("Please enter 3 numbers:\n");
    pailie(&num1, &num2, &num3);
    printf("%lf %lf %lf", num1, num2, num3);
    
    return 0;
}

void swamp(double *a, double *b)
{
    double temp;
    if (*a > *b)
    {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}
void pailie(double *first, double *second, double *third)
{
    swamp(first, second);
    swamp(second, third);
    swamp(first, second);
    
}