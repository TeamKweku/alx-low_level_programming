#include "main.h"
/**
  * append_text_to_file - function that appends text at
  * the end of a file
  * @filename: name of file to be appended
  * @text_content: content to append to file
  *
  * Return: 1 (success) or -1 (failure)
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, nwritten, length = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	nwritten = write(fd, text_content, length);
	if (nwritten == -1)
		return (-1);

	close(fd);

	return (1);
}
