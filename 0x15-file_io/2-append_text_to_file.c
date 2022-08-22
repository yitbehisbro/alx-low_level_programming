#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file to create
 * @text_content: NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, size = 0, buff;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_WRONLY | O_APPEND);

	if (file_d == -1)
		return (-1);

	if (text_content)
	{
		/** to get the size of text_content */
		while (*(text_content + size) != '\0')
			size++;

		buff = write(file_d, text_content, size);

		if (buff == -1)
			return (-1);
	}
	close(file_d);
	return (1);
}
