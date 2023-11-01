#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define LEN 40

int main(int argc, char *argv[])
{
    int ch;
    int count = 0;
    char name[LEN];
    FILE *in, *out;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s filename\n", argv[0]);
        exit(EXIT_FAILURE);
    }
    if ((in = fopen(argv[1], "r")) == NULL)
    {
        fprintf(stderr, "I couldn't open the file \"%s\"\n", argv[1]);
        exit(EXIT_FAILURE);
    }
    strncpy(name, argv[1], LEN - 5);
    name[LEN - 5] = '\0';
    strcat(name, ".red");
    if ((out = fopen(name, "w")) == NULL)
    {
        fprintf(stderr, "Can't creat output file.\n");
        exit(3);
    }
    while((ch = getc(in)) != EOF)
    {
        if (count++ % 3 == 0)
            putc(ch, out);
    }
    if (fclose(in) != 0 || fclose(out) != 0)
        fprintf(stderr, "Error in cloing files.\n");
    
    return 0;
}