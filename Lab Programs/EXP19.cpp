#include <stdio.h>
#include <pthread.h>
int x=0;
pthread_mutex_t m;
void *fun(void *p)
{
    pthread_mutex_lock(&m);
    x++;
    printf("%d\n",x);
    pthread_mutex_unlock(&m);
    return NULL;
}
int main()
{
    pthread_t t;
    pthread_mutex_init(&m,NULL);
    pthread_create(&t,NULL,fun,NULL);
    pthread_join(t,NULL);
    pthread_mutex_destroy(&m);
    return 0;
}