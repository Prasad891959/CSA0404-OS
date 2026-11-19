#include <stdio.h>
#include <semaphore.h>
int main()
{
    sem_t s;
    int data=10;
    sem_init(&s,0,1);
    sem_wait(&s);
    printf("Reader: %d\n",data);
    data=20;
    printf("Writer: %d\n",data);
    sem_post(&s);
    sem_destroy(&s);
    return 0;
}