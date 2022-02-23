#include <stdio.h>
#include <stdlib.h>
struct test{
        char a;
        int b;
};
struct testNew{
        char a;
        int b;
}__attribute__((packed));

int main()
{
        char str[10] = {'A', 0, 0, 0, 0, 'B', 0, 0, 0, 0};
        struct test *ptr;
        struct testNew *ptr1;
        ptr = (struct test *) str;
        ptr1 = (struct testNew *) str;
        printf("ptr = %c\n", (*ptr).a);
        printf("ptr = %x\n", (*ptr).b);
        ptr++;
        printf("ptr = %c\n", (*ptr).a);
        printf("ptr = %x\n", (*ptr).b);

        printf("ptr1 = %c\n", (*ptr1).a);
        printf("ptr1 = %x\n", (*ptr1).b);
        ptr1++;
        printf("ptr1 = %c\n", (*ptr1).a);
        printf("ptr1 = %x\n", (*ptr1).b);
}
