#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int len;

	len = _printf("%c%s%c%s", 'A',"a",'A',"a");

	
	printf("%d\n", len);

    return (0);
}
