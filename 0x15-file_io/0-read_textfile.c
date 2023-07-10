#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters) {
    ssize_t o, r, w;
    char *buffer;

    if (filename == NULL)
        return (0);

    buffer = malloc(sizeof(char) * letters);
    if (buffer == NULL)
        return (0);

    o = open(filename, O_RDONLY);
    if (o == -1) {
        free(buffer);
        return (0);
    }

    r = read(o, buffer, letters);
    if (r == -1) {
        free(buffer);
        close(o);
        return (0);
    }

    w = write(STDOUT_FILENO, buffer, r);
    if (w == -1 || w != r) {
        free(buffer);
        close(o);
        return (0);
    }

    free(buffer);
    close(o);

    return (w);
}
