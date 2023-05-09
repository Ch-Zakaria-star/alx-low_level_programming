#include "main.h"

/**
 * read_textfile - converts a binary number to unsigned int
 * @filename: pointer to string
 * @letters: string containing the binary number
 * Return: the converted number
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, chars_read, chars_written;
	char *buf;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}
	chars_read = read(fd, buf, letters);
	if (chars_read == -1)
	{
		return (0);
	}
	chars_written = write(STDOUT_FILENO, buf, chars_read);
	if (chars_written == -1)
	{
		return (0);
	}
	close(fd);
	free(buf);
	return (chars_written);
}
