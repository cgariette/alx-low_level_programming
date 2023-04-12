#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a textfile and prints it to the POSIX stdo
 * @letters: number of letters
 * @filename:pointer to file to be read from
 *
 * Return: actual number of lettersit could read and print
 * or 0 if it cannot be opened or read
 * or if write fails
 * or 0 if filename is NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(op, buf, letters);
	wr = write(STDOUT_FILENO, buf, rd);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(op);

	return (wr);
}	
