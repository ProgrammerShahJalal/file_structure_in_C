#include<stdio.h>

int main()
{
    FILE * inputFile;
    FILE * outputFile;

    inputFile = fopen("input.txt", "r");
    if(inputFile == NULL){
        printf("No file found\n");
        return 0;
    }
    outputFile = fopen("output.txt", "w");
    int n, sum=0;
    fscanf(inputFile, "%d", &n);

    for(int i=0; i<n; i++){
        int a;
        fscanf(inputFile, "%d", &a);
        sum+=a;
    }
    fprintf(outputFile, "Sum --> %d\n", sum);
    return 0;
}