#include <stdio.h>
#include <stdlib.h>
#include "Recursion.h"

int main()
{
	int u;
	printf("Выберите номер задания\n");
	printf("Задание №1\n");
	printf("Задание №2\n");
	printf("Задание №3\n");
	printf("Введите: ");
	scanf("%d", &u);

	switch (u)
	{
		case 1:
		{
			int l;
			printf("Введите размер массива: ");
			scanf("%d", &l);

			int m[l];
			printf("Введите элементы массива: ");
			for (int w = 0; w < l; ++w) {
				scanf("%d", &m[w]);
			}
			printf("\n");
			printf("Сумма массива(рекурсия): %d\n", sum_array_rec(l - 1, m));
			printf("Сумма массива(итерация): %d\n", sum_array_it(0, l - 1, m));
		}
		break;
		case 2:
		{
			int n;
			printf("Введите номер числа: ");
			scanf("%d", &n);

			printf("%d-ое число Фибоначчи(рекурсия): %d\n", n, fib_rec(n));
			printf("%d-ое число Фибоначчи(итерация): %d\n", n, fib_it_h(1, 1, n));
		}
		break;
		case 3:
		{
			int number;

			printf("Введите число: ");
			scanf("%d", &number);

			int i = 0, number_2 = number;

			while (number_2 != 0) {
				++i;
				number_2 = number_2 / 10;
			}

			char *q = malloc(i * sizeof(char));
			int y = n_s(q, number, i - 1);

			if (y == 0) {
				printf("Строка: %s\n", q);
			}

			free(q);
		}
		break;
	}

	return 0;
}