#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *sourceFile, *destFile;
    char ch;

    sourceFile = fopen("source.txt", "r");
    if (sourceFile == NULL) 
    {
        printf("Cannot open source file\n");
        return 1;
    }

    destFile = fopen("destination.txt", "w");
    if (destFile == NULL) 
    {
        printf("Cannot open destination file\n");
        fclose(sourceFile);
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF) 
    {
        fputc(ch, destFile);
    }

    printf("File copied successfully!\n");

    fclose(sourceFile);
    fclose(destFile);

    return 0;
}
