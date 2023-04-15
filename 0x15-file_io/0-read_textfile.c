#include "main.h"

/**
 * read_textfile - Reads a text file and prints its content to stdout.
 * @filename: The name of the file to be read.
 * @letters: Number of letters to read print.
 *Return: The number of letters, or 0 if fails.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{


	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);
	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
