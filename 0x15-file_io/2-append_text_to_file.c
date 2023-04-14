#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of file
 * @text_content: content in file
 *
 * Return: 1 if successful, 0 if not
 * or -1 if filename is NULL
 * 1 if file exists or -1 if the file doesn't
 */
int append_text_to_file(const char *filename, char *text_content)
{
if (filename == NULL || text_content == NULL)
		{
			return (-1);
		}
	/* open the file for appending*/
FILE *f = fopen(filename, "a");

if (f == NULL)
		{
			return (-1);
		}

	fputs(text_content, f);
	fclose(f);

	return (1);
}
