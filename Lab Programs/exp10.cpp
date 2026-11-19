#include <stdio.h>
#include <string.h>

int main()
{
    char message[100];

    printf("Enter message: ");
    gets(message);

    printf("\nMessage sent: %s\n", message);

    printf("Message received: %s\n", message);

    return 0;
}