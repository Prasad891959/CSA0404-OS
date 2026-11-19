#include <stdio.h>
int main() {
    int n,i,b[20];
    printf("Enter number of blocks: ");
    scanf("%d",&n);
    printf("Enter block numbers: ");
    for(i=0;i<n;i++) scanf("%d",&b[i]);
    printf("Index Block:\n");
    for(i=0;i<n;i++)
        printf("Data block %d -> %d\n",i+1,b[i]);
    return 0;
}
