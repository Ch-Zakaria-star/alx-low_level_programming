#include "main.h"

/**
 * read_textfile - converts a binary number to unsigned int
 * @filename: pointer to string
 * @letters: string containing the binary number
 * Return: the converted number
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int i;
	int read;
	char *b;

	if (filename == NULL)
	{
		return (0);
	}
	b = malloc(sizeof(char) * letters);
	if (b == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(b);
		return (0);
	}

	read = read(fd, b, letters);
	if (read == -1)
	{
		close(fd);
		free(b);
		return (0);
	}

	for (i = 0; i < read; i++)
	{
		if (write(STDOUT_FILENO, &b[i], 1) == -1)
		{
			close(fd);
			free(b);
			return (0);
		}

	}
	close(fd);
	free(b);
	return (read);
}
