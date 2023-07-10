#include <stdio.h>

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
    if (filename == NULL) {
        return 0;
    }

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        return 0;
    }

    char buffer[letters + 1];
    ssize_t bytesRead = fread(buffer, sizeof(char), letters, file);

    if (ferror(file) || bytesRead == 0) {
        fclose(file);
        return 0;
    }

    buffer[bytesRead] = '\0'; 

    printf("%s", buffer);

    fclose(file);
    return bytesRead;
}
