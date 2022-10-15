#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include "main.h"
/**
*c_handler - A function to print a char
*@c: string to print
*Return: length of the printed string
*/

int c_handler(char c)
{
	if (c)
		return (_putchar(c));
	else
		return (0);
}
