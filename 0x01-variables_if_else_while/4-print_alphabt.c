#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet letters except q and e using putchar function
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'q' || ch == 'e')
			ch++;
		putchar (ch);
		ch++;
	}
	putchar ('\n');
	return (0);
}

