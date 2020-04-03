#include <stdio.h>
/**
 * main - prints the number of arguments or flags
 * @argc: integer number of arguments
 * @argv: array of pointers
 * Description: print the number of argumens from the function
 * Return: 0 success
 */

int main(int ac, char *av[])
{
	int count;

	printf("%s\n", av[0]);

	for (count = 1; av[count] != NULL; count++)
	{
		printf("%s\n", av[count]);
	}
	return (0);
}
