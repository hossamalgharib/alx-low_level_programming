#include <stdio.h>

int main(void)
{
	int i;
	char c;
       	float f;
	long int li;
	long long int lli;

	printf("Size of an int: %lu.\n", (unsigned long)sizeof(i));
       	printf("Size of an char: %lu.\n", (unsigned long)sizeof(c));
	printf("Size of an float: %lu.\n", (unsigned long)sizeof(f));
	printf("Size of an long int: %lu.\n", (unsigned long)sizeof(li));
	printf("Size of an long long int: %lu.\n", (unsigned long)sizeof(lli));
	return(0);
}
