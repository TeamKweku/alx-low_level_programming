#include "main.h"

/**
  * read_textfile - function that reads a text file and prints
  * it to the POSIX standard output
  * @filename: string representation of file
  * @letters: number of letters to be read and printed
  *
  * Return: returns number of letters or (0) if error
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, nread, nwritten;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(fd);
		return (0);
	}

	nread = read(fd, buffer, letters);
	if (nread == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	nwritten = write(STDOUT_FILENO, buffer, nread);
	if (nwritten == -1 || nwritten != nread)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (nwritten);
}
