#include <stdio.h>
#include "Recursion.h"

int n_s(char *q, int c, int n)
{
	if (n == 0) {
		*(q + n) = c + 48;
		return 0;
	}

	*(q + n) = (c % 10) + 48;

	return n_s(q, c/10, n - 1);
}