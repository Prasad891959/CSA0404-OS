#include <stdio.h>
int main() {
    int p[]={7,0,1,2,0,3,0,4,2,3,0,3,2};
    int f[3]={-1,-1,-1},i,j,k=0,fault=0,hit;
    for(i=0;i<13;i++) {
        hit=0;
        for(j=0;j<3;j++)
            if(f[j]==p[i]) hit=1;
        if(!hit) {
            f[k]=p[i]; k=(k+1)%3; fault++;
        }
    }
    printf("Page Faults = %d\n",fault);
    return 0;
}
