#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
	char op;
	int (*f)(va_list);
} op_t;

int _putchar(char);
int _printf(const char *format, ...);
int s_handler(va_list);
int c_handler(va_list);
int percentage_handler(va_list);
int d_handler(va_list);
int i_handler(va_list);
int (*get_op_func(char c))(va_list);

#endif
