#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output.
 * @filename: the name of file
 * @letters: the number of letters it should read and print
 *
 * Return: actual number of letters it could read and print else
 * 0, if filename is NULL or write fails or does not write
 * the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t r_len, w_len;
	int file_d;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}
	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_d);
		return (0);
	}
	r_len = read(file_d, buffer, letters);
	close(file_d);

	if (r_len == -1)
	{
		free(buffer);
		return (0);
	}
	w_len = write(STDOUT_FILENO, buffer, r_len);
	free(buffer);

	if (r_len != w_len)
	{
		return (0);
	}
	return (w_len);
}
