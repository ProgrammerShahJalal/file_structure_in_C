#include <stdio.h>
int main()
{
    FILE *inputFile = fopen("input.txt", "r");
    if (inputFile == NULL)
        return 0;

    FILE *outputFile = fopen("output.txt", "w");

    int n;
    fscanf(inputFile, "%d", &n);
    fprintf(outputFile, "%d\n", n);

    fclose(inputFile);
    fclose(outputFile);
    return 0;
}