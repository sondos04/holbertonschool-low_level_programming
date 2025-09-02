#include "main.h"
#include <stdio.h>
void swap_int(int *a, int *b)
{
int *s;
*s = *a;
*a = *b;
*b = *s;
}
