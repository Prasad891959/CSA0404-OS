#include <stdio.h>
#include <semaphore.h>
int main()
{
    sem_t fork;
    sem_init(&fork, 0, 1);
    sem_wait(&fork);
    printf("Philosopher is eating\n");
    sem_post(&fork);
    sem_destroy(&fork);
    return 0;
}