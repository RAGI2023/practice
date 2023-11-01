#include<stdio.h>
void input(int , int col, double [][col]);
void average_row(int , int col, double [][col]);
void average_all(int , int col, double [][col]);
void max(int , int col, double [][col]);
void show_data(int , int col, double [][col]);

int main(void)
{
    int r = 3;
    int c = 5;
    double array[r][c];

    input (r, c, array);
    average_row(r, c, array);
    average_all(r, c, array);
    max(r, c, array);
    show_data(r, c, array);

    return 0;
}
void input(int row, int col, double source[][col])
{
    int i, j;
    for (j = 0; j < row; j++)
    {
        for (i = 0; i < col; i++)
        {
            scanf("%lf", *(source+j)+i);
            getchar();
        }
    }
}
void average_row(int row, int col, double source[][col])
{
    int i, j;
    double tot = 0.0;
    for (j = 0; j < row; j++)
    {
        for (i = 0; i < col; i++)
        {
            tot += source[j][i];
        }
        printf("The avergae of the row of %d is %.2lf.\n", j+1, tot / 5.0);
        tot = 0.0;
    }
}
void average_all(int row, int col, double source[][col])
{
    int i, j;
    double tot = 0.0;
    for (j = 0; j < row; j++)
    {
        for (i = 0; i < col; i++)
        {
            tot += source[j][i];
        }
    }
    printf("The average of all is %.2lf.\n", tot / 15.0);
}
void max(int row, int col, double source[][col])
{
    int i, j;
    double the_max = 0.0;
    for (j = 0; j < row; j++)
    {
        for (i = 0; i < col; i++)
        {
            the_max = (the_max < source[j][i]) ? source[j][i] : the_max;
        }
    }
    printf("The max is %.2lf.\n", the_max);
}
void show_data(int n, int m, double array[][m])
{
    int i, j;
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < m; i++)
        {
            printf("%.2lf ", array[j][i]);
        }
        printf("\n");
    }
}