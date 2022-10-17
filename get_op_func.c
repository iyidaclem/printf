#include <stdio.h>
#include <unistd.h>
#include <stdarg.h>

/**
 * @op: The operato
 * @c: The c handler
 * @i: The i handler
 */

int (*get_op_func(char))(va_list)
{
	int i;
	op_t ops[] = {
		{'c', printc}
		{'i', printi} 
	};

	while (ops[i].op)
	{
		if(ops[i].op == c)
		{
			return ops[i].f;
		}
		i++;
	}
	return NULL;
}
