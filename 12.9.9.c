#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    int amount;
    printf("How many words do you wish to enter?");
    scanf("%d", &amount);
    char **words = (char **)malloc(amount * sizeof(char *));
    for(int i = 0; i < amount; i++)
    {
        char temp[100];
        scanf("%s", temp);
        int length = strlen(temp);
        char *str = (char *)malloc(length * sizeof(char));
        strcpy(str, temp);
        *(words + i) = str;
    }
    for (int i = 0; i < amount; i++)
    {
        printf("%s\n", *(words + i));
        free(words[i]);
    }
        
    free(words);
    printf("All done!\n");

    return 0;
}