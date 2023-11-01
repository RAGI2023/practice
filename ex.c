#include<stdio.h>
int main(void)
{
    char  c;
    int i;
    float f;
//    int a = scanf("%c %f", &c, &f);
    for (i = 0; (c = getchar()) != '\n'; i += c)
    {

    }
    printf("%d", i);
    return 0;
}