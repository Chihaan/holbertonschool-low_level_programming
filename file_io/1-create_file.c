#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * create_file - Creates a text file and writes into it.
 * @filename: The file.
 * @text_content: The content of the text.
 *
 * Return: 1, 0 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t write_check;

	if (!filename)
		return (-1);
	if (!text_content)
	{
		fd = open(filename, O_TRUNC | O_CREAT | O_WRONLY, 0600);
			if (fd == -1)
				return (-1);
		close(fd);
		return (1);
	}

	while (text_content[len] != '\0')
		len++;

	fd = open(filename, O_TRUNC | O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	write_check = write(fd, text_content, len);
	if (write_check != len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
