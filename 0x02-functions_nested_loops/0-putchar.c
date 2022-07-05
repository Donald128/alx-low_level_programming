#include "main.h"
/**
 * main - Print "_purchar" followed by a new line
 * Description: You are not allowed to include standard libraries.
 * Return: 0
 */
int main(void)
{
	char holberton[] = "_putchar";
	int i = 0;

	while (holberton[i] != '\0')
	{
		_putchar(holberton[i]);
		i++;
	}
	-putchar('\n');

	return (0);
}
