#include <stdio.h>
#include <semaphore.h>
int main()
{
    sem_t s;
    sem_init(&s,0,0);
    printf("Produced\n");
    sem_post(&s);
    sem_wait(&s);
    printf("Consumed\n");
    sem_destroy(&s);
    return 0;
}