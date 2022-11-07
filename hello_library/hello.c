#include <stdio.h>
#include "hello.h"

int main()
{
    hello_world();
    return 0;
}

// Note:
// ---only on Windows---
// Every function needs to be exported to be able to access the functions by dart.
// Refer: https://stackoverflow.com/q/225432/8608146
void hello_world()
{
    printf("Hello World\n");

    FILE* fp = fopen("test.txt","w");

    for (int i = 0; i < 5; i++) {
        fputs("test\n",fp);
    }
    fputs("end", fp);

    fclose(fp);
}