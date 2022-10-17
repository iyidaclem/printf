#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "main.h"
/**
*percentage_handler - A function to print a %
*@c: string to print
*Return: length of the printed string
*/

int percentage_handler(va_list list)
{
	if (list)
		return (_putchar(va_arg(list, int)));
	else
		return (0);
}
