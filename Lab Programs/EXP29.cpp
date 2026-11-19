#include <stdio.h>
int main() {
    int full=0,empty=5,x=0,c;
    while(1) {
        printf("\n1.Produce 2.Consume 3.Exit: ");
        scanf("%d",&c);
        if(c==1 && empty) {
            x++; full++; empty--;
            printf("Produced %d\n",x);
        } else if(c==2 && full) {
            printf("Consumed %d\n",x);
            x--; full--; empty++;
        } else if(c==3) break;
        else printf("Buffer unavailable\n");
    }
    return 0;
}
