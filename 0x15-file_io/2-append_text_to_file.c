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
int op, wr, length = 0;
if (filename == NULL)
{
return (-1);
}
if (text_content != NULL)
{
for (length = 0; text_content[length];)
length++;
}
op = open(filename, O_WRONLY | O_APPEND);
wr = write(op, text_content, length);

if (op == -1 || wr == -1)
	return (-1);

close(op);

return (1);
}
