#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <string.h>

/**
 * create_file - function that creates a file
 *
 * Description: function that creates a file
 *
 * @filename: filename
 * @text_content: text
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content) {
    int fd;

    if (filename == NULL)
        return -1;

    fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
    if (fd == -1)
        return -1;

    if (text_content == NULL)
        text_content = "";

    ssize_t len = strlen(text_content);
    ssize_t bytesWritten = write(fd, text_content, len);

    close(fd);

    return (bytesWritten == len) ? 1 : -1;
}
