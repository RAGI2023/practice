#include<stdio.h>
void printchar (char ch, int times, int lines);
int main(void)
{
    int times, lines;
    char ch;
    printf("What you want to print?\n");
    scanf("%c", &ch);
    printf("How many times you want to print?\nHow many lines you want?");
    scanf("%d %d", &times, &lines);
    printchar(ch, times, lines);

    return 0;
}

void printchar(char ch, int times ,int lines)
{
    int i,j;
    for (i = 0; i < lines; i++)
    {
        for (j = 0; j < times; j++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }
}