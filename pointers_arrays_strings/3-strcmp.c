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
	int sum1 = 0;
	int sum2 = 0;
	while (s1[count1] != '\0')
	{
		sum1 = sum1 + (int)s1[count1];
		count1++;
}
	 while (s2[count2] != '\0')
{
        sum2 = sum2 + (int)s2[count2];	
	count2++;
}
	diff = count1 - count2;
	return (diff);

}
