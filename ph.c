#include <stdio.h>
int main()
{
    int *inputFile;
    inputFile = fopen("input.txt", "r");

    while (1)
    {
        char ch = fgetc(inputFile);
        if (ch == EOF)
            break;
        printf("%c", ch);
    }

    return 0;
}