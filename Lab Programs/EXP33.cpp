#include <stdio.h>
int main() {
    int p[]={7,0,1,2,0,3,0,4,2,3,0,3,2};
    int f[3]={-1,-1,-1},i,j,k,pos,far,hit,n=13,count=0;
    for(i=0;i<n;i++) {
        hit=0;
        for(j=0;j<3;j++)
            if(f[j]==p[i]) hit=1;
        if(hit) continue;
        pos=0; far=-1;
        for(j=0;j<3;j++) {
            if(f[j]==-1) {pos=j; far=999; break;}
            for(k=i+1;k<n && p[k]!=f[j];k++);
            if(k>far) {far=k; pos=j;}
        }
        f[pos]=p[i]; count++;
    }
    printf("Page Faults = %d\n",count);
    return 0;
}
