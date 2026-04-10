#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it to POSIX stdout.
 * @filename: The file.
 * @letters: The number of letters to read and print.
 *
 * Return: letters wrote or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	int fd;
	ssize_t bytes_read, write_check;

	if (!filename)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (!buff)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(buff);
		return (0);
	}

	bytes_read = read(fd, buff, sizeof(char) * letters);

	if (bytes_read == -1)
	{
		close(fd);
		free(buff);
		return (0);
	}
	write_check = write(STDOUT_FILENO, buff, bytes_read);
	if (write_check != bytes_read)
	{
		free(buff);
		close(fd);
		return (0);
	}
	free(buff);
	close(fd);
	return (write_check);
}
