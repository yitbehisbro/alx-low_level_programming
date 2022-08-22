#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * create_file - creates a file.
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure (file can not be created,
 * file can not be written, write “fails”, etc…)
 */
int create_file(const char *filename, char *text_content)
{
	int file_d;
	size_t size = 0;
	ssize_t length = 0;

	/** To get the size of text_content */
	while (*(text_content + size) != '\0')
		size++;
	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (-1);
	file_d = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (file_d == -1)
		return (-1);
	if (text_content != NULL)
		length = write(file_d, text_content, size);
	close(file_d);
	if (length == -1)
		return (-1);
	return (1);
}
