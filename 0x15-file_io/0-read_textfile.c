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
	if (fd < 0)
		return (0);
	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);
	nrd = read(fd, buf, letters);
	if (nrd < 0)
	{
	free(buf);
	return (0);
	}
	buf[nrd] = '\0';
	close(fd);
	nwr = write(STDOUT_FILENO, buf, nrd);
	if (nwr < 0)
	{
	free(buf);
	return (0);
	}
	free(buf);
	return (nwr);
}
