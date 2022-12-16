#include<stdio.h>
int main()
{
    FILE * logFile = fopen("logfile.txt", "a");
    FILE * inputFile = fopen("habijabi.txt", "r");

if(inputFile ==NULL){
    fprintf(logFile, "habijabi file not found\n");
    return 0;
}
    fprintf(logFile, "Alhamdulillah at 4:29 AM\n");
    return 0;
}