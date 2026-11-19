#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
int main() {
    int fd; char b[50];
    fd=open("a.txt",O_CREAT|O_RDWR,0644);
    write(fd,"Hello World",11);
    lseek(fd,0,SEEK_SET);
    int n=read(fd,b,11);
    b[n]='\0';
    printf("%s\n",b);
    close(fd);
    return 0;
}
