#include "function_pointers.h"

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < atoi(argv[1]) - 1; i++)
	{
		printf("%02hhx ", ((char *)main)[i]);
	}

	printf("%02hhx\n", ((char *)main)[i]);
	return (0);
}
