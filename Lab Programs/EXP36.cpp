#include <stdio.h>
int main() {
    int b[20],n,i;
    printf("Enter number of blocks: ");
    scanf("%d",&n);
    printf("Enter block numbers: ");
    for(i=0;i<n;i++) scanf("%d",&b[i]);
    for(i=0;i<n;i++)
        printf("%d -> ",b[i]);
    printf("NULL\n");
    return 0;
}
