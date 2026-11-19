#include <stdio.h>
#include <stdlib.h>
int main() {
    int n,h,r[20],i,total=0;
    printf("Enter number of requests: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&r[i]);
    printf("Enter head position: ");
    scanf("%d",&h);
    for(i=0;i<n;i++) {
        total+=abs(h-r[i]);
        h=r[i];
    }
    printf("Total seek time = %d\n",total);
    return 0;
}
