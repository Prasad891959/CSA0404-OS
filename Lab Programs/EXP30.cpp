#include <stdio.h>
#include <pthread.h>
void *fun(void *x) {
    printf("Inside thread\n");
    return NULL;
}
int main() {
    pthread_t t;
    pthread_create(&t,NULL,fun,NULL);
    pthread_join(t,NULL);
    printf("Main thread completed\n");
    return 0;
}
