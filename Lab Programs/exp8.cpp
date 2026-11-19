#include <stdio.h>

int main()
{
    int n, i, tq;
    int bt[10], rt[10];
    int time = 0, done;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("Enter burst time for P%d: ", i+1);
        scanf("%d", &bt[i]);

        rt[i] = bt[i];
    }

    printf("Enter time quantum: ");
    scanf("%d", &tq);

    do
    {
        done = 1;

        for(i = 0; i < n; i++)
        {
            if(rt[i] > 0)
            {
                done = 0;

                if(rt[i] > tq)
                {
                    time += tq;
                    rt[i] -= tq;
                }
                else
                {
                    time += rt[i];
                    rt[i] = 0;

                    printf("P%d completed at %d\n",
                           i+1, time);
                }
            }
        }

    } while(done == 0);

    return 0;
}