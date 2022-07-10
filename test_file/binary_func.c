#include "main.h"
/**
* bina - fills memory with a constant byte
* @a: the value to print
* Return: numbers of characters printed
*/
int bina(va_list a)
{
	unsigned int num = va_arg(a, int), i, j, num1 = 0, cant = 0, bin = 0;
	char *binary;

	num1 = num;
	for (i = 1; num1 / 2 != 0; i++)
		num1 /= 2;

	binary = malloc(sizeof(char) * (i + 1));
	if (binary == NULL)
		return (0);
	for (j = 0; j < i; j++)
	{
		bin = num % 2;
		binary[(i - 1) - j] = bin + '0';
		num /= 2;
	}
	binary[j] = '\0';
	cant = write(1, binary, i);
	free(binary);
	return (cant);
}

