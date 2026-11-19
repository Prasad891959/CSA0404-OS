#include <stdio.h>
struct Emp { int id; char name[20]; };
int main()
{
    FILE *f=fopen("emp.dat","wb+");
    struct Emp e={101,"Ravi"};
    fwrite(&e,sizeof(e),1,f);
    rewind(f);
    fread(&e,sizeof(e),1,f);
    printf("%d %s",e.id,e.name);
    fclose(f);
    return 0;
}