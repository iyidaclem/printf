#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdarg.h>
/**
*s_handler - A function to print string
*@list: variadic argument list
*Return: length of the printed string
*
*Description: This function recieves argument from
*va_list
*/

int s_handler(va_list list)
{
	char *str;

	if (list)
	{
		str = va_arg(list, char *);
		return (write(1, str, strlen(str)));
	}
	return (0);
}
