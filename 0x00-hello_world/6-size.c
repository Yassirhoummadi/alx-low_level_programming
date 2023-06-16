#include <stdio.h>

/**
* main - Entry points
*
* Description: using sizeof to print the size of various typees.
*
* Return: Always 0 (Success)
*/

int main(void)
{
char c;
int i;
long lo;
long long llo;
float f;
	printf("Size of a char: %d byte(s)\n", sizeof(c));
	printf("Size of an int: %d byte(s)\n", sizeof(i));
	printf("Size of a long int: %d byte(s)\n", sizeof(lo));
	printf("Size of along long int: %d byte(s)\n", sizeof(llo));
	printf("Size of a float: %d byte(s)\n", sizeof(f));
	return (0);
}

