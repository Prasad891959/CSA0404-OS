#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
int main() {
    int fd=open("foo.txt",O_RDONLY);
    if(fd==-1) perror("Error");
    else {
        printf("File opened: %d\n",fd);
        close(fd);
    }
    return 0;
}
