#include <stdio.h>
#include <sys/stat.h>
int main() {
    if(chmod("file.txt",0644)==0)
        printf("Permissions changed successfully\n");
    else
        perror("Error");
    return 0;
}
