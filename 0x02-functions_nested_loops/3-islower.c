#include"main.h"

/**
 * _islower - function that checks if the input of
 * type char is a lower case
 *
 * @c: is
 *
 * Return: 1
 *
 */

int _islower(int c)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		return (1);
	}
	return (0);
}
