#ifndef MAIN_H
#define MAIN_H

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
int s_handler(char *);
int c_handler(char);
int percentage_handler(char);
int d_handler(char);
int i_handler(char);

#endif
