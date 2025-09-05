#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j = 0;
	int sum1 = 0;
	int sum2 = 0;
	int diff;
	 while (s1[i] != '\0')
        {
                sum1 += (int)s1[i];
                i++;
        }
	while (s2[j] != '\0')
	{
		sum2 += (int)s2[j];
		j++;
	}
	diff = sum1 - sum2;
	return (diff);
}
