#include "main.h"

/**
	* main - default description
	* Description: write a programme to print _putchar, followed by new line
	* Return: 0
*/

int main(void)
{
	char tmp[] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(tmp[i++]);
	}
	_putchar('\n');
	return (0);
}
