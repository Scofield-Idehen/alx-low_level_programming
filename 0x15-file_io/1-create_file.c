#include "main.h"

/**
 * create_file - Creates a file and writes the given text to it.
 * @filename: The name of the file to create.
 * @text_content: The text to write to the file (NULL-terminated string).
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, bytes_written = 0, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		bytes_written = write(fd, text_content, len);
	}

	close(fd);

	return (bytes_written == len ? 1 : -1);
}
