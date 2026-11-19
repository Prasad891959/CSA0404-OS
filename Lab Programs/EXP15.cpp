#include <stdio.h>
int main()
{
    char u[20],f[20];
    printf("Enter username and filename: ");
    scanf("%19s %19s",u,f);
    printf("%s -> %s\n",u,f);
    return 0;
}