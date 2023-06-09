#include "main.h"

/**
 * append_text_to_file - appends text to a file
 *
 * @filename: name of file
 * @text_content: content to append
 * Return: Returns 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, appended, str_len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content)
	{
		while (text_content[str_len])
			str_len++;
		appended = write(fd, text_content, str_len);
		if (appended != str_len)
			return (-1);
	}
	close(fd);
	return (1);
}
