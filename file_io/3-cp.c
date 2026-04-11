#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
/**
 * close_fd - Closes a fd.
 * @fd: The file descriptor.
 *
 * Return: Nothing
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * cp_file - Copy for a file to another
 * @fd1: First file
 * @fd2: Second file
 * @argv: The argv
 * Return: Nothing
 */
void cp_file(int fd1, int fd2, char *argv[])
{
	char buff[1024];
	ssize_t bytes_read, write_check;

	while ((bytes_read = read(fd1, buff, 1024)) > 0)
	{
		write_check = write(fd2, buff, bytes_read);
		if (write_check == -1)
		{
			close(fd1);
			close(fd2);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		close(fd1);
		close(fd2);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
}
/**
 * main - check the code
 * @argc: Argument count.
 * @argv: Arguments.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int fd1, fd2;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		close(fd1);
		exit(99);
	}
	cp_file(fd1, fd2, argv);
	close_fd(fd1);
	close_fd(fd2);
	return (0);
}
