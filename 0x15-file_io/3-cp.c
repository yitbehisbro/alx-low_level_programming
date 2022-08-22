#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number or count of argument passes
 * @argv: arguments vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	ssize_t count_ch, count_fd;
	int cp_this, to_this, close_in_error;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	cp_this = open(argv[1], O_RDONLY);
	to_this = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);

	if (cp_this == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (to_this == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	count_ch = 1024;
	while (count_ch == 1024)
	{
		count_ch = read(cp_this, buffer, 1024);
		if (count_ch == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		count_fd = write(to_this, buffer, count_ch);
		if (count_fd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	close_in_error = close(cp_this);
	if (close_in_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cp_this);
		exit(100);
	}

	close_in_error = close(to_this);
	if (close_in_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", cp_this);
		exit(100);
	}
	return (0);
}
