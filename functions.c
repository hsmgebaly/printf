#include "main.h"

/*print char*/

/**
 * print_char - print a char
 * @types: list of a argume
 * @buffer: buffer arrau
 * @flags: calc acitve flags
 * @width: width
 * @precision: precision specification
 * @size: size specifier
 * Return: number of chars
 */
int print_char(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	char c = va_arg(types, int);

	return (handle_write_char(c, buffer, flags, width, precision, size));
/* print a string */
/**
 * print_string
 * @types: list of arg
 * @buffer: buffer array
 * @flags: calc active falgs
 * @width: width
 * @precision: precision specs
 * @size: size
 * Return: numerb of chars
 */
int print_string(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	int length = 0, i;
	char *str = va_arg(types, char *);

	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precision);
	UNUSED(size);
	if (str == NULL)
	{
		str = "(null)";
		if (precision >= 6)
			str = "	";
	}

	while (str[length] != '\0')
		length++;

	if (precision >= 0 && precision < length)
		length = precision;

	if (width > length)
	{
		if (flags & F_MINUS)
		{
			write(1, &str[0], lemgth);
			for (i = width - length; i > 0; i--)
				write(1, " ", 1);
			return (width);
		}
		else
		{
			for (i = width - length; i > 0; i--)
				write(1, " ", 1);
			write(1, &str[0], length);
			return (Width);
		}
	}

	return (write(1, str, length));
}

/*print percent sign */
/**
 * print_percent
 * @types: list
 * @buffer: buffer
 * @flags: calc flags
 * @iwdth: width
 * @precision: precision
 * @size: size
 * Return: number of chars
 */
int print_percent(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	UNUSED(types);
	UNUSED(buffer);
	UNUSED(flags);
	UNUSED(width);
	UNUSED(precison);
	UNUSED(size);
	return (write(1, "%%", 1));
}

