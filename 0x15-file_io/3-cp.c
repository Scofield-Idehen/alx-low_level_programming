#include "main.h"

#include <sys/types.h>
#include <sys/uio.h>

#define BUF_SIZE 1024

/**
 * error_exit - prints an err message and exits d program with d given code
 * @code: the exit code to use
 * @msg: the error message to print
 * @arg: an additional argument to include in the error message
 */
void error_exit(int code, const char *msg, const char *arg)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, arg);
	exit(code);
}

/**
 * main - Entry point for the program
 * @argc: The number of arguments passed to the program
 * @argv: An array of strings containing the arguments passed to the program
 *
 * Return: 0 if the program completes successfully, otherwise a non-zero value
 */
int main(int argc, char *argv[])
{
	int fd_from, fd_to, bytes_written;
	ssize_t bytes_read;
	char buffer[BUF_SIZE];

	if (argc != 3)
		error_exit(97, "Usage: cp file_from file_to", "");

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Error: Can't read from", argv[1]);

	fd_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Error: Can't write to", argv[2]);

	while ((bytes_read = read(fd_from, buffer, BUF_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			error_exit(99, "Error: Can't write to", argv[2]);
		}
	}

	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		error_exit(98, "Error: Can't read from", argv[1]);
	}

	close(fd_from);
	close(fd_to);

	return (0);
}
