#include<stdio.h>
int main(void)
{
    char str1[] = {"abc"};
    char str2[] = {"abc\0"};
    char str3[4] = {'a', 'b', 'c', 'd'};
    int num[4] = {1, 2, 3, '\0'};
    char str4[5] = {'a', 'b', 'c', 'd', '\0'};
    int i = 0;
    while (str1[i] != '\0')
    {
        printf("%c ", str1[i]);
        i++;
    }
    i = 0;
    printf("\n");
    while (str2[i] != '\0')
    {
        printf("%c ", str2[i]);
        i++;
    }
    i = 0;
    printf("\n");
    while (str3[i] != '\0')
    {
        printf("%c ", str3[i]);
        i++;
    }
    i = 0;
    printf("\n");
    while (str4[i] != '\0')
    {
        printf("%c ", str4[i]);
        i++;
    }
    i = 0;
    printf("\n");
    while (num[i] != '\0')
    {
        printf("%d ", num[i]);
        i++;
    }
    printf("%d", num[5]);
    return 0;
}