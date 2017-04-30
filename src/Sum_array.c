#include <stdio.h>
#include "Recursion.h"

int sum_array_rec(int l, int m[])
{
	if (l == 0) {
		return m[0];
	}

	return m[l] + sum_array_rec(l - 1, m);
}

int sum_array_it(int r, int l, int m[])
{
	if (l == -1) {
		return r;
	}

	return sum_array_it(r + m[l], l - 1, m);
}