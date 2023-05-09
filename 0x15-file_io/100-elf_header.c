#include <stdio.h>
#include <elf.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>

void print_magic(char *header);
void print_class(char *header, int x64);
void print_data(char *header);
void print_version(char *header);
void print_OS(char *header);
void print_abiv(char *header);
void print_type(char *header);
void print_entry(char *header);
/**
  * main - displays the header information of an ELF
  * of file
  * Usage: elf_header elf_filename
  * Displayed information: (no less, no more, do not
  * include trailing whitespace)
  * Magic
  * Class
  * Data
  * Version
  * OS/ABI
  * ABI Version
  * Type
  * Entry point address
  * @argc: argument counts passed to prog
  * @argv: pointer to array of options passed to prog
  *
  * Return: 0 (success)
  */
int main(int argc, char **argv)
{
	char header[32];
	int fd_elf, nread, x64 = 0;

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);

	fd_elf = open(argv[1], O_RDONLY);
	if (fd_elf == -1)
		dprintf(STDERR_FILENO, "Error: Can't open file\n"), exit(98);

	nread = read(fd_elf, header, 32);
	if (nread == -1)
		dprintf(STDERR_FILENO, "Error reading file content\n"), exit(98);

	if (header[0] != 0x7f || header[1] != 'E' || header[2] != 'L' ||
			header[3] != 'F')
		dprintf(STDERR_FILENO, "Error: Not an ELF file\n"), exit(98);

	if (header[4] == 2)
		x64 = 1;
	print_magic(header);
	print_class(header, x64);
	print_data(header);
	print_version(header);
	print_OS(header);
	print_abiv(header);
	print_type(header);
	print_entry(header);

	if (close(fd_elf) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close file\n"), exit(98);

	return (0);
}

/**
  * print_magic - print elf file magic content
  * @header: pointer to header
  *
  * Return: nothing
  */
void print_magic(char *header)
{
	int i;

	printf("ELF Header:\n  Magic:  ");
	for (i = 0; i < 16; i++)
		printf("%02x ", (unsigned int) header[i]);
	printf("\n");
}

/**
  * print_class - prints the elf class class
  * @header: pointer to header
  * @x64: int value for 32/64bit arch
  * Return: nothing
  */
void print_class(char *header, int x64)
{
	if (header[4] != 1 && header[4] != 2)
	{
		printf("<unknown: %02hx>", header[4]);
		return;
	}
	printf("  %-35s", "Class:");
	if (x64 == 0)
		printf("ELF32\n");
	else if (x64 == 1)
		printf("ELF64\n");
}

/**
  * print_data - prints elf file endianness
  * @header: pointer to header
  *
  * Return: nothing
  */
void print_data(char *header)
{
	printf("  %-35s", "Data:");
	printf("2's complement, ");
	if (header[5] == 1)
		printf("little endian\n");
	else if (header[5] == 2)
		printf("big endian\n");
	else
		printf("<unknown: %02hx>\n", header[5]);
}

/**
  * print_version - print elf version
  * @header: pointer to header
  *
  * Return: nothing
  */
void print_version(char *header)
{
	printf("  %-35s", "Version:");
	if (header[6] <= EV_CURRENT)
	{
		printf("%d", header[6]);
		if (header[6] == EV_CURRENT)
			printf(" (current)\n");
		else
			printf("\n");
	}
	else
		printf("49 <unknown %%lx>");
}

/**
  * print_OS - prints the elf OS/ABI
  * @header: pointer to header
  *
  * Return: nothing
  */
void print_OS(char *header)
{
	printf("  %-35s", "OS/ABI:");

	if (header[7] == 0)
		printf("UNIX - System V\n");
	else if (header[7] == 1)
		printf("UNIX - HP-UX\n");
	else if (header[7] == 2)
		printf("UNIX - NetBSD\n");
	else if (header[7] == 3)
		printf("UNIX - Linux\n");
	else if (header[7] == 4)
		printf("UNIX - GNU Hurd\n");
	else if (header[7] == 6)
		printf("UNIX - Solaris\n");
	else if (header[7] == 7)
		printf("UNIX - AIX\n\n");
	else if (header[7] == 8)
		printf("UNIX - IRIX\n");
	else if (header[7] == 9)
		printf("UNIX - FreeBSD\n");
	else if (header[7] == 10)
		printf("UNIX - Tru64\n");
	else if (header[7] == 11)
		printf("UNIX - Novell Modesto\n");
	else if (header[7] == 12)
		printf("UNIX - OpenBSD\n");
	else if (header[7] == 13)
		printf("UNIX - Open VMS\n");
	else if (header[7] == 14)
		printf("UNIX - NonStop Kernel\n");
	else if (header[7] == 15)
		printf("UNIX - AROS\n");
	else if (header[7] == 16)
		printf("UNIX - Fenix OS\n");
	else if (header[7] == 17)
		printf("UNIX - CloudABI\n");
	else
		printf("<unknown: %02hx>\n", header[7]);
}


/**
  * print_abiv - prints the ABI Version
  * @header: pointer to header
  *
  * Return: nothing
  */
void print_abiv(char *header)
{
	printf("  %-35s", "ABI Version:");
	printf("%d\n", header[8]);
}

/**
  * print_type - print the elf type
  * @header: pointer to header
  *
  * Return: Nothing
  */
void print_type(char *header)
{
	int i;

	if (header[5] == 1)
		i = 16;
	else
		i = 17;
	printf("  %-35s", "Type:");
	if (header[i] == 1)
		printf("REL (Relocatable file)\n");
	else if (header[i] == 2)
		printf("EXEC (Executable file)\n");
	else if (header[i] == 3)
		printf("DYN (Shared object file)\n");
	else if (header[i] == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown>: %02x%02x\n", header[16], header[17]);
}

/**
  * print_entry - prints the entry address of the exe
  * @header: pointer to header
  *
  * Return: nothing
  */
void print_entry(char *header)
{
	int index, tail;

	printf("  %-35s0x", "Entry point address:");
	if (header[4] == 2)
		tail = 0x1f;
	else
		tail = 0x1b;
	if (header[5] == 1)
	{
		index = tail;
		while (header[index] == 0 && index > 0x18)
			index--;
		printf("%x", header[index--]);
		while (index >= 0x18)
			printf("%02x", (unsigned char) header[index--]);
		printf("\n");
	}
	else
	{
		index = 0x18;
		while (header[index] == 0)
			index++;
		printf("%x", header[index++]);
		while (index <= tail)
			printf("%02x", (unsigned char) header[index++]);
		printf("\n");
	}
}
