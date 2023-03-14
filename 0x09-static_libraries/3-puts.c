#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string to stdout
 * @str: string to print
 */
void _puts(char *str)
{
/* loop through each character and print to stdout */
int i = 0;
while (str[i] != '\0')
{
putchar(str[i]);
i++;
}
putchar('\n');
}

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
_puts("\"Programming is like building a multilingual puzzle");
return (0);
}
