
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a= 270533154;
	char *ptr;
	ptr = &a;
	printf("first byte = %d\n", *ptr);
	ptr++;
	printf("second byte = %d\n", *ptr);
	ptr++;
	*ptr = 87;
	printf("third byte = %d\n", *ptr);
	ptr++;
	printf("fourth byte = %d\n", *ptr);
	ptr++;
}
