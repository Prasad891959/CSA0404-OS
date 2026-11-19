#include <stdio.h>

int main()
{
    FILE *dest;
    char text[200];

    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);

    dest = fopen("dest.txt", "w");

    if(dest == NULL)
    {
        printf("File cannot be created.\n");
        return 1;
    }

    fputs(text, dest);

    fclose(dest);

    printf("File copied successfully.\n");

    return 0;
}