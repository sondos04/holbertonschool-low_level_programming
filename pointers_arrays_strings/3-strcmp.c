#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int _strcmp(char *s1, char *s2)
{
	int count1 = 0;
	int count2 = 0;
	int diff;
	while (s1[count1] != '\0')
		count1++;
	 while (s2[count2] != '\0')
                count2++;
	diff = count1 - count2;
	return (diff);

}
