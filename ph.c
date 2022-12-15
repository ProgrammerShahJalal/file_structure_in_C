#include <stdio.h>
int main()
{
    FILE *inputFile;
    FILE *outputFile;
    inputFile = fopen("input.txt", "r");
    if(inputFile==NULL)
    {
        printf("No file found\n");
        return 0;
    }
    outputFile = fopen("output.txt" ,"w");
    while (1)
    {
        char ch = fgetc(inputFile);
        if (ch == EOF)
            break;
       fputc(ch, outputFile);
    }

    return 0;
}