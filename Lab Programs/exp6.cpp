#include <stdio.h>

int main()
{
    int n, i;
    int at[10], bt[10], pr[10], rt[10];
    int time = 0, completed = 0;
    int min, pos;

    printf("Enter number of processes: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nP%d Arrival Time: ", i+1);
        scanf("%d", &at[i]);

        printf("P%d Burst Time: ", i+1);
        scanf("%d", &bt[i]);

        printf("P%d Priority: ", i+1);
        scanf("%d", &pr[i]);

        rt[i] = bt[i];
    }

    printf("\nExecution:\n");

    while(completed < n)
    {
        min = 9999;
        pos = -1;

        for(i = 0; i < n; i++)
        {
            if(at[i] <= time && rt[i] > 0 &&
               pr[i] < min)
            {
                min = pr[i];
                pos = i;
            }
        }

        if(pos == -1)
        {
            time++;
        }
        else
        {
            printf("P%d ", pos+1);

            rt[pos]--;
            time++;

            if(rt[pos] == 0)
                completed++;
        }
    }

    return 0;
}