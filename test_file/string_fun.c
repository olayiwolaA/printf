#include "main.h"
/**
  * st - fills memory with a constant byte
  * @a: the value to print
  * Return: numbers of characters printed
  */
int st(va_list a)
{
	char *st = va_arg(a, char *);
	int i;

	if (st == NULL)
		st = "(null)";

	for (i = 0; st[i] != '\0'; i++)
		;
	return (write(1, st, i));
}

/**
  * ch - fills memory with a constant byte
  * @a: the value to print
  * Return: numbers of characters printed
  */
int ch(va_list a)
{
	char st = va_arg(a, int);

	return (write(1, &st, 1));
}

/**
  * por - fills memory with a constant byte
  * @a: the value to print
  * Return: numbers of characters printed
  */
int por(va_list a)
{
	char porce = '%';

	(void) a;
	return (write(1, &porce, 1));
}

