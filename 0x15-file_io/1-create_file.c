#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - Creates a file and writes text content to it
 * @filename: The name of the file to create
 * @text_content: The text content to write to the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	ssize_t len = strlen(text_content);
	ssize_t bytes_written = write(fd, text_content, len);

	close(fd);

	return (bytes_written == len ? 1 : -1);
}

