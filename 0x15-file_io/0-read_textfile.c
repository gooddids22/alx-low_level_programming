#include "main.h"
#include <stdio.h>

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: textfile being read.
 * @letters: numbers of letters printed.
 *
 * Return: numbers of letters printed.
 * returns 0 when func fails or filename is NULL.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t fd;
ssize_t w;
ssize_t t;
char *buf;

fd = open(filename, O_RDONLY);
if (fd == -1)

return (0);

buf = malloc(sizeof(char) * (letters));
t = read(fd, buf, letters);
w = write(STDOUT_FILENO, buf, t);

free(buf);

close(fd);

return (w);
}
