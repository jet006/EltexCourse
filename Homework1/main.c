#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int a = 0x00DDAABB;
    printf("First bite of a: %x\n", (a & 0x000000FF));
    printf("Second bite of a: %x\n", (a & 0x0000FF00)>>8);
    printf("Third bite of a: %x\n", (a & 0x00FF0000)>>16);
    printf("Fourth bite of a: %x\n", (a & 0xFF000000)>>24);
    int k = (a & 0x0000FFFF) | 0x00CC0000;
    printf("k: %x\n", k);
}
