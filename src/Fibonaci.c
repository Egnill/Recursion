#include <stdio.h>
#include "Recursion.h"

int fib_rec(int n)
{
	if (n == 0 || n == 1) {
		return 1;
	}

	return fib_rec(n - 1) + fib_rec(n - 2);
}

int fib_it_h(int a, int b, int n)
{
	if (n == 1) {
		return a;
	}

	return fib_it_h(a + b, a, n - 1);
}