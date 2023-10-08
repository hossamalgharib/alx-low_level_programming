#include <stdio.h>

/**
 * main - it's entry point
 *
 *  and it's  booooring
 *
 *  Return: Always 0
 */

int main(void)
{
	int i;
	char c;
       	float f;
	long int li;
	long long int lli;

	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(i));
       	printf("Size of an char: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an float: %lu byte(s)\n", (unsigned long)sizeof(f));
	printf("Size of an long int: %lu byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of an long long int: %lu byte(s)\n", (unsigned long)sizeof(lli));
	return(0);
}
