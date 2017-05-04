#include <stdio.h>
#include <stdlib.h>
#include "Recursion.h"

int main()
{
	int u, o = 1;
	int l, w, y, n, i = 0;
	int number, number_2;
	
	while (o) {
		printf("Выберите номер задания\n");
		printf("Задание №1\n");
		printf("Задание №2\n");
		printf("Задание №3\n");
		printf("Выход(0)\n");
		printf("Введите: ");
		scanf("%d", &u);

		switch (u)
			{
				case 1:
				{
					printf("Введите размер массива: ");
					scanf("%d", &l);
	
					int m[l];
					printf("Введите элементы массива: ");
					for (w = 0; w < l; ++w) {
						scanf("%d", &m[w]);
					}
					printf("\n");
					printf("Сумма массива(рекурсия): %d\n", sum_array_rec(l - 1, m));
					printf("Сумма массива(итерация): %d\n", sum_array_it(0, l - 1, m));
				}
				break;
				case 2:
				{
					printf("Введите номер числа: ");
					scanf("%d", &n);
	
					printf("%d-ое число Фибоначчи(рекурсия): %d\n", n, fib_rec(n));
					printf("%d-ое число Фибоначчи(итерация): %d\n", n, fib_it_h(1, 1, n));
				}
				break;
				case 3:
				{
					printf("Введите число: ");
					scanf("%d", &number);
					
					number_2 = number;
	
					while (number_2 != 0) {
						++i;
						number_2 = number_2 / 10;
					}
	
					char *q = malloc(i * sizeof(char));
					y = n_s(q, number, i - 1);
	
					if (y == 0) {
						printf("Строка: %s\n", q);
					}
	
				free(q);
			}
			break;
			case 0:
			{
				o = 0;
			}
			break;
		}
	}

	return 0;
}