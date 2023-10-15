#include<stdio.h>
#define ROWS 3
#define COLS 4
void sum_rows(int ar[][COLS], int rows);
void sum_cols(int (*ar)[COLS], int rows);
int sum2d(int ar[][COLS], int rows);
int main(void)
{
    int junk[ROWS][COLS] = {
        {2, 4, 6, 8},
        {3, 5, 7, 9},
        {12, 10, 8, 6}
    };
    sum_rows(junk, ROWS);
    sum_cols(junk, ROWS);
    printf("Sum of all elements = %d.\n", sum2d(junk, ROWS));

    return 0;
}
void sum_rows(int ar[][COLS], int rows)
{
    int r, i, sum;
    for (r = 0; r < ROWS; r++)
    {
        sum = 0;
        for (i = 0; i < COLS; i++)
            sum += ar[r][i];
        printf("row %d: sum = %d\n", r+1, sum);
    }
}
void sum_cols(int ar[][COLS], int rows)
{
    int c, i, sum;
    for (c = 0; c < COLS; c++)
    {
        sum = 0;
        for (i = 0; i < ROWS; i++)
            sum += ar[i][c];
        printf("col %d: sum = %d\n", c+1, sum);
    }
}
int sum2d(int ar[][COLS], int rows)
{
    int r, c, sum;
    sum = 0;
    for (r = 0; r < ROWS; r++)
    {
        for (c = 0; c < COLS; c++)
            sum += ar[r][c];
    }
    return sum;
}