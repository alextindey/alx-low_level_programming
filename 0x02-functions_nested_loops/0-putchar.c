#include "main.h"

/*
*main - prints _putchar
*
*description: prints _putchar
*
*Returns: 0 (Success)
*/


int main(void)
{

	char text[9] = "_putchar";
	int i = 0;

	while (i < 9)
	{
		_putchar(text[i]);
		i++
	}
	_putchar('\n');
	
	return (0);
}
