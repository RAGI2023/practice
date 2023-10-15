#include<stdio.h>
void copy_2d(double [][5], double [][5]);
int main(void)
{
    double source[3][5] = {
        {1, 3, 5, 7, 9},
        {2, 4, 6, 8, 10},
        {11, 13, 15, 17, 19}
    };
    double target[3][5];
    int r, c;
    copy_2d(source, target);
    for (r = 0; r < 3; r++)
    {
        for(c = 0; c < 5; c++)
        {
            printf("%.2lf ", target[r][c]);
        }
        printf("\n");
    }
    return 0;
}
void copy_2d(double source[][5], double target[][5])
{
    int r, c;
    for (r = 0; r < 3; r++)
    {
        for(c = 0; c < 5; c++)
        {
            target[r][c] = source[r][c];
        }
    }
}