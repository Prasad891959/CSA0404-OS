#include <stdio.h>
#include <windows.h>

int main()
{
    HANDLE hMap;
    char *shared;

    hMap = CreateFileMapping(
        INVALID_HANDLE_VALUE,
        NULL,
        PAGE_READWRITE,
        0,
        100,
        "MySharedMemory"
    );

    shared = (char *)MapViewOfFile(
        hMap,
        FILE_MAP_ALL_ACCESS,
        0,
        0,
        100
    );

    printf("Enter message: ");
    gets(shared);

    printf("Shared Memory Data: %s\n", shared);

    UnmapViewOfFile(shared);
    CloseHandle(hMap);

    return 0;
}a