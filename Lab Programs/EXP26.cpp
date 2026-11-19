#include <stdio.h>
int main() {
    FILE *f;
    char s[100];
    f=fopen("a.txt","w");
    fprintf(f,"Hello World\n");
    fclose(f);
    f=fopen("a.txt","r");
    while(fgets(s,100,f)) printf("%s",s);
    fclose(f);
    return 0;
}
