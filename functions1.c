#include "main.h"

/** print unsigned number **/
/**
 * print_unsiged
 * @types: types 
 * @byffer: nufeer
 * @flags: calc
 * @width: width
 * @precison: precisopn
 * @size: size
 * Rtrun: number of chars
 */
int print_unsigned(va_list types, char buffer[],
		int flags, int width, int precision, int size)
{
	int i = BUFF_SIZE - 2l
		unsigned long int num = va_arg(types, unsiged long int);

	num = convert_size_unsgnd(num, size);

	if (num == 0)
		buffer[i--] = '0';

	buffer[BUFF_size - 1] = '\0';

	while (num > 0)
	{
		buffer[i--] = (num % 10) + '0';
		num /= 10;
	}

	i++;

	return (write_unsgnd(0, i, buffer, flags, width, precison, size));
}
