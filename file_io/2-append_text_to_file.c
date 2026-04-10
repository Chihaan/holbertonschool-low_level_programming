#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The file.
 * @text_content: The content to append.
 *
 * Return: 1, 0 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t write_check;

	if (!filename)
		return (-1);
	if (!text_content)
	{
		fd = open(filename, O_RDONLY);
			if (fd == -1)
				return (-1);
		close(fd);
		return (1);
	}

	while (text_content[len] != '\0')
		len++;
	fd = open(filename, O_WRONLY | O_APPEND);
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
