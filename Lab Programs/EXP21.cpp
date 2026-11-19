#include <stdio.h>
int main() {
    int b[]={100,500,200,300,600};
    int p[]={212,417,112,426};
    int i,j,w;
    for(i=0;i<4;i++) {
        w=-1;
        for(j=0;j<5;j++)
            if(b[j]>=p[i] && (w==-1 || b[j]>b[w]))
                w=j;
        if(w!=-1) {
            printf("P%d -> Block %d\n",i+1,w+1);
            b[w]-=p[i];
        } else printf("P%d not allocated\n",i+1);
    }
    return 0;
}
