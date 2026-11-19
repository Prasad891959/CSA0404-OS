#include <stdio.h>
int main()
{
    char f[20][20];
    int i,n;
    printf("Enter number of files: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%19s",f[i]);
    for(i=0;i<n;i++)
        printf("%s\n",f[i]);
    return 0;
}