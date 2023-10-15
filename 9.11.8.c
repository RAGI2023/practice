#include<stdio.h>
#include<math.h>
int main(void)
{
    double base;
    int index, index_positive, i;
    double number = 1.0;
    printf("Please enter the base and index.\n");
    scanf("%lf %d", &base, &index);
    index_positive = abs(index);
    if (index_positive >= 1)
    {
        for (i = 0; i < index_positive; i++)
        {
            number *= base;
        }
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