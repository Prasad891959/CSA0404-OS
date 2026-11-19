#include <stdio.h>
int main()
{
    int a[]={1,0},n[]={1,1},avail=1,i;
    for(i=0;i<2;i++)
        if(n[i]<=avail){
            avail+=a[i];
            printf("P%d ",i);
        }
    return 0;
}