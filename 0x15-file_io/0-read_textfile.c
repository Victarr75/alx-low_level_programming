#include "main.h"

#define BUF_SIZE 1024

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output.
 * @filename: The name of the file to read.
 * @letters: The number of letters it should read and print.
 *
 * Return: The actual number of letters it could read and print.
 *         If the file cannot be opened or read, return 0.
 *         If filename is NULL, return 0.
 *         If write fails or does not write the expected amount of bytes, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters) {
    if (filename == NULL)
        return 0;

    int fd = open(filename, O_RDONLY);
    if (fd == -1)
        return 0;

    char buffer[BUF_SIZE];
    size_t total_read = 0;
    ssize_t bytes_read;

    while (total_read < letters && (bytes_read = read(fd, buffer, BUF_SIZE)) > 0) {
        ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
        if (bytes_written != bytes_read) {
            close(fd);
            return 0;
        }
        total_read += bytes_written;
    }

    close(fd);

    if (total_read < letters)
        return total_read;

    return letters;
}
