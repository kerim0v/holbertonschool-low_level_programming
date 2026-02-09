#include "main.h"

/**
 * create_file - afa
 * @filename: safa
 * @text_content: asfa
 * Return: asf
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t w_bytes;
	size_t len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		w_bytes = write(fd, text_content, len);
		if (w_bytes == -1 || (size_t)w_bytes != len)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
