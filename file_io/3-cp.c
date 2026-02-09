#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#define BUF_SIZE 1024

/**
 * check_args - Checks the number of arguments
 * @argc: Argument count
 */
void check_args(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * open_from - Opens the source file
 * @file_from: Name of the source file
 *
 * Return: File descriptor of the source file
 */
int open_from(const char *file_from)
{
	int fd;

	fd = open(file_from, O_RDONLY);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	return (fd);
}

/**
 * open_to - Opens/creates the destination file
 * @file_to: Name of the destination file
 *
 * Return: File descriptor of the destination file
 */
int open_to(const char *file_to)
{
	int fd;

	fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file_to);
		exit(99);
	}
	return (fd);
}

/**
 * copy_file - Copies content from one file descriptor to another
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
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", file_to);
			close(fd_from);
			close(fd_to);
			exit(99);
		}
	}

	if (r_bytes == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", file_from);
		close(fd_from);
		close(fd_to);
		exit(98);
	}
}

/**
 * close_fd - Closes a file descriptor
 * @fd: File descriptor to close
 */
void close_fd(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", fd);
		exit(100);
	}
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

	check_args(argc);
	fd_from = open_from(argv[1]);
	fd_to = open_to(argv[2]);
	copy_file(fd_from, fd_to, argv[1], argv[2]);
	close_fd(fd_from);
	close_fd(fd_to);

	return (0);
}
