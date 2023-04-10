#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - main function
* @argc: number of arguments to program
* @argv: vector of arguments
* Return: always zero.
*/

int main(int argc, char *argv[])
{
int mult;

if (argc == 3)
{
mult = atoi(argv[1]) * atoi(argv[2]);
printf("%d\n", mult);
}
else
{
printf("Error\n");
return (1);
}

return (0);
}
