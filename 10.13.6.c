#include<stdio.h>
double *reverse_order(double num[]);
int main(void)
{
    double num[4] = {1.0, 2.0, 3.0, 4.0};
    double * num_reversed;
    int i;
    num_reversed = reverse_order(num);
    for (i = 0; i < 4; i++)
    {
        printf("%lf ", num_reversed[i]);
    }

    return 0;
}
double * reverse_order(double num[])
{
    static double num_revers_function[4];
    int i;
    for (i = 0; i < 4; i++)
    {
        num_revers_function[i] = num[3-i];
    }
    return num_revers_function;
}