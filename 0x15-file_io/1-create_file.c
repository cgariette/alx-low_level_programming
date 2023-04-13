#include "main.h"

/**
 * create_file - creates a file.
 * @filename: the name of the file
 * @text_content: NULL terminated string to write to file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int op, wr, length = 0;

	if (filename == NULL)
		return (-1);


	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
		{
			length++;
		}

