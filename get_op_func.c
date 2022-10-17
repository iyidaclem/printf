#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>
#include "main.h"

/**
 *get_op_func - A function for select appropriate
 *for performance formated printing
 *@c: format specifier
 *Return: pointer to a function for handling a given
 *input type
 */

int (*get_op_func(char c))(va_list)
{
	int i;
	op_t ops[] = {
		{'c', c_handler},
		{'s', s_handler},
		{'%', percentage_handler},
		{'d', d_handler},
		{'i', i_handler}
	};

	while (ops[i].op)
	{
		if (ops[i].op == c)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (NULL);
}
