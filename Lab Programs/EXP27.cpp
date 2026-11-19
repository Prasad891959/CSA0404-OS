#include <stdio.h>
#include <dirent.h>
int main() {
    DIR *d=opendir(".");
    struct dirent *e;
    if(d==NULL) return 1;
    while((e=readdir(d))!=NULL)
        printf("%s\n",e->d_name);
    closedir(d);
    return 0;
}
