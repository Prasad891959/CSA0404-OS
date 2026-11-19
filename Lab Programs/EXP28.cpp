#include <stdio.h>
#include <string.h>
int main() {
    FILE *f=fopen("a.txt","r");
    char s[100],p[30];
    if(!f) return 1;
    printf("Enter pattern: ");
    scanf("%29s",p);
    while(fgets(s,100,f))
        if(strstr(s,p)) printf("%s",s);
    fclose(f);
    return 0;
}
