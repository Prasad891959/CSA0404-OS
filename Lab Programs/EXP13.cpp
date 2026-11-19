#include <stdio.h>
int main()
{
    int b[]={100,500,200}, p[]={90,180};
    int i,j;
    for(i=0;i<2;i++)
        for(j=0;j<3;j++)
            if(b[j]>=p[i]){
                printf("P%d -> Block %d\n",i+1,j+1);
                b[j]-=p[i];
                break;
            }
    return 0;
}