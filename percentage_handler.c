#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "main.h"
/**
*percentage_handler - A function to print a %
*@c: string to print
*Return: length of the printed string
*/

int percentage_handler(char c)
{
	if (c)
		return (_putchar(c));
	else
		return (0);
}
