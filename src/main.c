#include <stdio.h>
#include <stdlib.h>
#include "Recursion.h"

int main()
{
	int n = 6;

	/*printf("Введите номер члена Фибоначчи: ");
	scanf("%d", &n);*/

	printf("Фибоначчи(рекурсия): %d\n", fib_rec(n));
	printf("Фибоначчи(итерация): %d\n", fib_it_h(1, 1, n));
	printf("\n");

	int m[] = {1, 5, -8, 6, -9, 10, 11, 12, 100};
	int l = sizeof(m) / sizeof(int);

	printf("Сумма массива(рекурсия): %d\n", sum_array_rec(l - 1, m));
	printf("Сумма массива(итерация): %d\n", sum_array_it(0, l - 1, m));
	printf("\n");

	int number = 159357;
	int i = 0, number_2 = number;

	while (number_2 != 0) {
		++i;
		number_2 = number_2 / 10;
	}

	char *q = malloc(i * sizeof(char));
	int y = n_s(q, number, i - 1);

	if (y == 0) {
		printf("Перевод числа в строку: %s\n", q);
	}

	free(q);

	return 0;
}