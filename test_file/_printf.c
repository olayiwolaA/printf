#include "main.h"
/**
<<<<<<< HEAD
 * _printf - formatted output conversion and print data.
 * @format: input string.
 *
 * Return: number of chars printed.
 */
int _printf(const char *format, ...)
{
unsigned int i = 0, len = 0, ibuf = 0;
va_list arguments;
int (*function)(va_list, char *, unsigned int);
char *buffer;

va_start(arguments, format), buffer = malloc(sizeof(char) * 1024);
if (!format || !buffer || (format[i] == '%' && !format[i + 1]))
return (-1);
if (!format[i])
return (0);
for (i = 0; format && format[i]; i++)
{
if (format[i] == '%')
{
if (format[i + 1] == '\0')
{	print_buf(buffer, ibuf), free(buffer), va_end(arguments);
return (-1);
=======
  * _printf - output according to a format
  * @format: is the string given
  * Return: numbers of characters printed
  */

int _printf(const char *format, ...)
{
int i = 0, cont = 0;
va_list va;
int (*pp)();

if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);
va_start(va, format);
for (i = 0; format != NULL && format[i] != '\0'; i++)
{
if (format[i] == '%')
{
pp = equal(format + i);
if (pp != NULL)
{
cont += pp(va);
i++;
}
else
cont += _putc(format[i]);
}
else
cont += _putc(format[i]);
}
cont += _write(-1, "c", 1);
va_end(va);
return (cont);
>>>>>>> 758857de78f77ccb62289e5caf248c0bc71fed3f
}
else
{
function = get_print_func(format, i + 1);
if (function == NULL)
{
<<<<<<< HEAD
if (format[i + 1] == ' ' && !format[i + 2])
return (-1);
handl_buf(buffer, format[i], ibuf), len++, i--;
=======
return (_write(1, &(a), 1));
>>>>>>> 758857de78f77ccb62289e5caf248c0bc71fed3f
}
else
{
<<<<<<< HEAD
len += function(arguments, buffer, ibuf);
i += ev_print_func(format, i + 1);
}
} i++;
}
else
handl_buf(buffer, format[i], ibuf), len++;
for (ibuf = len; ibuf > 1024; ibuf -= 1024)
;
}
print_buf(buffer, ibuf), free(buffer), va_end(arguments);
return (len);
=======
int j;
op_t o[] = {
{"c", ch},
{"s", st},
{"i", inte},
{"d", inte},
{"%", por},
{"b", bina},
{"o", octa},
{"u", unsig},
{"x", hexal},
{"X", hexau},
{"S", sst},
{"p", point},
{"r", reve},
{"R", rot13},
{NULL, NULL},
};

for (j = 0; o[j].op != NULL; j++)
if (format[1] == o[j].op[0])
return (o[j].f);
return (o[j].f);
>>>>>>> 758857de78f77ccb62289e5caf248c0bc71fed3f
}
