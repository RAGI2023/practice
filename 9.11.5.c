#include<stdio.h>
void larger_of (double *num1, double *num2);
int main(void)
{
    double a,b;
    printf("Please enter two numbers.\n");
    scanf("%lf %lf", &a, &b);
    larger_of(&a, &b);
    printf("%lf %lf", a, b);
    return 0;
}

void larger_of(double * num1, double * num2)
{
    *num1 = (*num1 < *num2) ? *num2 : *num1;
    *num2 = (*num1 < *num2) ? *num2 : *num1;
}