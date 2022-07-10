#include "main.h"
/**
* octa - fills memory with a constant byte
* @a: the value to print
* Return: numbers of characters printed
*/
int octa(va_list a)
{
	unsigned int num = va_arg(a, int), i, j, num1 = 0, cant = 0, oct = 0;
	char *octal;

	num1 = num;
	for (i = 1; num1 / 8 != 0; i++)
		num1 /= 8;

	octal = malloc(sizeof(char) * (i + 1));
	if (octal == NULL)
		return (0);
	for (j = 0; j < i; j++)
	{
		oct = num % 8;
		octal[(i - 1) - j] = oct + '0';
		num /= 8;
	}
	octal[j] = '\0';
	cant = write(1, octal, i);
	free(octal);
	return (cant);
}


/**
* unsig - fills memory with a constant byte
* @a: the value to print
* Return: numbers of characters printed
*/
int unsig(va_list a)
{
	unsigned int num = va_arg(a, int), i, j, num1 = 0, cant = 0, unsi = 0;
	char *unsigne;

	num1 = num;
	for (i = 1; num1 / 10 != 0; i++)
		num1 /= 10;

	unsigne = malloc(sizeof(char) * (i + 1));
	if (unsigne == NULL)
		return (0);
	for (j = 0; j < i; j++)
	{
		unsi = num % 10;
		unsigne[(i - 1) - j] = unsi + '0';
		num /= 10;
	}
	unsigne[j] = '\0';
	cant = write(1, unsigne, i);
	free(unsigne);
	return (cant);
}


/**
* hexal - fills memory with a constant byte
* @a: the value to print
* Return: numbers of characters printed
*/
int hexal(va_list a)
{
	unsigned int num = va_arg(a, int), i, j, num1 = 0, cant = 0, hexa = 0;
	char *hexadeci;

	num1 = num;
	for (i = 1; num1 / 16 != 0; i++)
		num1 /= 16;

	hexadeci = malloc(sizeof(char) * (i + 1));
	if (hexadeci == NULL)
		return (0);

	for (j = 0; j < i; j++)
	{
		hexa = num % 16;
		if (hexa > 9)
			hexadeci[(i - 1) - j] = hexa - 10 + 97;
		else
			hexadeci[(i - 1) - j] = hexa + '0';
		num /= 16;
	}
	hexadeci[j] = '\0';
	cant = write(1, hexadeci, i);
	free(hexadeci);
	return (cant);
}


/**
* hexau - fills memory with a constant byte
* @a: the value to print
* Return: numbers of characters printed
*/
int hexau(va_list a)
{
	unsigned int num = va_arg(a, int), i, j, num1 = 0, cant = 0, hexa = 0;
	char *hexadeci;

	num1 = num;
	for (i = 1; num1 / 16 != 0; i++)
		num1 /= 16;

	hexadeci = malloc(sizeof(char) * (i + 1));
	if (hexadeci == NULL)
		return (0);

	for (j = 0; j < i; j++)
	{
		hexa = num % 16;
		if (hexa > 9)
			hexadeci[(i - 1) - j] = hexa - 10 + 65;
		else
			hexadeci[(i - 1) - j] = hexa + '0';
		num /= 16;
	}
	hexadeci[j] = '\0';
	cant = write(1, hexadeci, i);
	free(hexadeci);
	return (cant);
}

