#include <stdio.h>
/**
 * main - entry point
 *
 * Description: sizof function
 *
 * Return: 0 (success)
*/

int main(void)
{
	printf("Size of a char: %C\n byte(s)", sizeof(char));
	printf("Size of an int: %u\n byte(s)", sizeof(int));
	printf("Size of a long int: %u\n byte(s)", sizeof(long int));
	printf("Size of a long long int: %u\n byte(s)", sizeof(long long int));
	printf("Size of a float: %uf\n byte(s)", sizeof(float));
	return (0);
}


