#include <main.h>

/**
 * main - entry poitn
 *
 * Description: print _putchar
 *
 * Return: 0 (success)
*/

int main(void)
{
	char string[] = "_putchar";
	int ch = 0;

	for (ch = 0; ch < 8; ch++)
		_putchar(string[ch]);
		_putchar('\n');
	return (0);
}
