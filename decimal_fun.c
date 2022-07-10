#include "main.h"

/**
* inte - fills memory with a constant byte
* @a: the value to print
* Return: numbers of characters printed
*/
int inte(va_list a)
{
	int num = va_arg(a, int), i, j, cant = 0, dig = 0, num1 = 0, neg = 0;
	char *number;

	num1 = num;
	if (num1 < 0)
		neg = 1;

	for (i = 1; num1 / 10 != 0; i++)
		num1 /= 10;

	number = malloc(sizeof(char) * (i + 1 + neg));
	if (number == NULL)
		return (0);
	for (j = 0; j < i; j++)
	{
		dig = num % 10;
		(neg) ? (dig *= -1) : (dig *= 1);
		number[(i + neg - 1) - j] = dig + '0';
		num /= 10;
	}
	if (neg == 1)
		number[0] = '-';
	number[j + neg] = '\0';
	cant = write(1, number, i + neg);
	free(number);
	return (cant);
}

