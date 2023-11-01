#include<stdio.h>
void copy (int n, int m, double [][5], double [][m]);
void show_data (int n, int m, double [][m]);
int main(void)
{
    int n = 3;
    int m = 5;
    double source[3][5] = {
        {1, 3, 5, 7, 9}, 
        {2, 4, 6, 8, 10}, 
        {11, 13, 15, 17, 19}
    };
    double target[n][m];

    copy(n, m, source, target);
    show_data(3, 5, source);
    show_data(n, m, target);

    return 0;
}
void copy(int n, int m, double source[][5], double target[][m])
{
    int i, j;
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < m; i++)
        {
            target[j][i] = source[j][i];
        }
    }
}
void show_data(int n, int m, double array[][m])
{
    int i, j;
    for (j = 0; j < n; j++)
    {
        for (i = 0; i < m; i++)
        {
            printf("%.1lf ", array[j][i]);
        }
        printf("\n");
    }
}