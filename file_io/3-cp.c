#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define BUF_SIZE 1024

/**
 * error_exit - Prints an error message to stderr and exits
 * @code: Exit code
 * @fmt: Format string for dprintf
 * @file: File name (may be NULL)
 * @fd: File descriptor (used only for code 100)
 */
void error_exit(int code, const char *fmt, const char *file, int fd)
{
	if (code == 97)
		dprintf(STDERR_FILENO, "%s", fmt);
	else if (code == 98 || code == 99)
		dprintf(STDERR_FILENO, fmt, file);
	else if (code == 100)
		dprintf(STDERR_FILENO, fmt, fd);

	exit(code);
}

/**
 * copy_file - Copies data from one file descriptor to another
 * @fd_from: Source file descriptor
 * @fd_to: Destination file descriptor
 * @file_from: Source file name (for error messages)
 * @file_to: Destination file name (for error messages)
 */
void copy_file(int fd_from, int fd_to,
	       const char *file_from, const char *file_to)
{
	ssize_t r_bytes, w_bytes;
	char buffer[BUF_SIZE];

	while ((r_bytes = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		w_bytes = write(fd_to, buffer, r_bytes);
		if (w_bytes == -1 || w_bytes != r_bytes)
			error_exit(99, "Error: Can't write to %s\n", file_to, 0);
	}

	if (r_bytes == -1)
		error_exit(98, "Error: Can't read from file %s\n", file_from, 0);
}

/**
 * close_fd - Closes a file descriptor and handles errors
 * @fd: File descriptor to close
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
		error_exit(100, "Error: Can't close fd %d\n", NULL, fd);
}

/**
 * main - Copies the content of a file to another file
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to\n", NULL, 0);

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from file %s\n", argv[1], 0);

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		close_fd(fd_from);
		error_exit(99, "Error: Can't write to %s\n", argv[2], 0);
	}

	copy_file(fd_from, fd_to, argv[1], argv[2]);
	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}
