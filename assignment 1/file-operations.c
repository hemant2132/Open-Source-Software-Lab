#include <stdio.h>

int main ()
{
    FILE *filePointer;

    filePointer = fopen("file.txt", "w");

    if (filePointer == NULL)
    {
        printf("File failed to open for 'write'");
        return 0;
    }

    char *data;
    printf("\nEnter data to be entered into the file\n");
    gets(data);

    fprintf(filePointer, data);
    fclose(filePointer);

    printf("\nData successfully entered!\n");

    filePointer = fopen("file.txt", "r");

    if (filePointer == NULL)
    {
        printf("File failed to open for 'read'");
        return 0;
    }

    while(fgets(data, 1000, filePointer) != NULL)
    {
        printf("\nFile's data:\n%s", data);
    }

    fclose(filePointer);

    return 0;
}