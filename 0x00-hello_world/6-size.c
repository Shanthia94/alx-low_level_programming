#include <stdio.h>
/**
 *main-prints the size of the various type
 *Return: 0 if exited properly, non-zero otherwise
 */
int main(void)
{
	char c;
	int i;
	float f;
	printf("Size of a char: %lu.\n",(unsigned long)sizeof(c));
	printf("Size of an int: %lu.\n",(unsigned long)sizeof(i));
	printf("Size of a long int: %lu.\n",(unsigned long)sizeof(i));
	printf("Size of a long long int: %lu.\n",(unsigned long)sizeof(i));
	printf("Size of a float: %lu.\n",(unsigned long)sizeof(f));
	return (0);
}
