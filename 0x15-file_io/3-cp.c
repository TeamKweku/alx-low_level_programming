#include "main.h"
/**
  * main - program that copies the content of a file to
  * another file
  * @argc: argument count passed to program
  * @argv: array pointer to named argument vector passed
  * to program
  *
  * Return: 0 (success)
  */
int main(int argc, char **argv)
{
	int fd_from, fd_to, nread, nwritten;
	char buffer[BUFFER_SIZE];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	fd_from = open(argv[1], O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}

	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((nread = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		nwritten = write(fd_to, buffer, nread);
		if (nwritten == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (nread == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from the file %s\n", argv[1]);
		exit(98);
	}

	close_file(fd_to);
	close_file(fd_from);
	return (0);
}

/**
  * close_file - closes a file
  * @fd: takes a file descriptor as argument
  *
  * Return: nothing
  */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
