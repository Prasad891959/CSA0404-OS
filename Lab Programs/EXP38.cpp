#include <stdio.h>
#include <stdlib.h>
int main() {
    int r[]={10,20,35,60,80},n=5,h=30,i,j,t,total=0;
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(r[i]>r[j]) {
                t=r[i]; r[i]=r[j]; r[j]=t;
            }
    for(i=0;i<n;i++)
        if(r[i]>=h) {
            total+=abs(h-r[i]); h=r[i];
        }
    for(i=n-1;i>=0;i--)
        if(r[i]<30) {
            total+=abs(h-r[i]); h=r[i];
        }
    printf("Total seek time = %d\n",total);
    return 0;
}
