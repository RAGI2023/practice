#include<stdio.h>
#include<math.h>
double power_function (double base, int index);
int main(void)
{
    int index, index_positive;
    double base, number;
    printf("Please enter the base and index.\n");
    scanf("%lf %d", &base, &index);
    index_positive = abs(index);
    if (index_positive >= 1)
    {
        number = power_function(base, index_positive);
    }
    else if (index == 0)
    {
        if (base == 0)
            printf("无定义。\n");
        else
            number = 1;
    }
    if (index < 0)
        number = 1/number;
    printf("The result: %lf.\n", number);

    return 0;
}

double power_function(double base, int index)
{
    double result;
    if (index == 0)
        result = 1;
    else
        result = base * power_function(base, index - 1);
    return result;
}