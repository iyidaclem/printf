#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
*s_handler - A function to print string
*@str: string to print
*Return: length of the printed string
*/

int s_handler(char *str)
{
	if (str)
		return (write(1, str, strlen(str)));
	return (0);
}
