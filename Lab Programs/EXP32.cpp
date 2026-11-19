#include <stdio.h>
int main() {
    int p[]={7,0,1,2,0,3,0,4,2,3,0,3,2};
    int f[3]={-1,-1,-1},t[3]={0},i,j,k,tm=0,n=13,hit,old, faults=0;
    for(i=0;i<n;i++) {
        tm++; hit=0;
        for(j=0;j<3;j++)
            if(f[j]==p[i]) {t[j]=tm; hit=1; break;}
        if(!hit) {
            old=0;
            for(k=0;k<3;k++)
                if(f[k]==-1) {old=k; break;}
                else if(t[k]<t[old]) old=k;
            f[old]=p[i]; t[old]=tm; faults++;
        }
    }
    printf("Page Faults = %d\n",faults);
    return 0;
}
