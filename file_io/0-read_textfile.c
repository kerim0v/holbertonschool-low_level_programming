#include "main.h"

/**
 * read_textfile - asfa
 * @filename:csad
 * letters: asda
 * Return: asfa
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t r_bytes, w_bytes;
	
	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(fd);
		return (0);
	}

	r_bytes = read(fd, buf, letters);
	if (r_bytes == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	w_bytes = write(STDOUT_FILENO, buf, r_bytes);
	if (w_bytes != r_bytes)
	{
		free(buf);
		close(fd);
		return (0);
	}

	free(buf);
	close(fd);

	return (w_bytes);
}
