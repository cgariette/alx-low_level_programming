#include <stdio.h>
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
	FILE *filename;
	
