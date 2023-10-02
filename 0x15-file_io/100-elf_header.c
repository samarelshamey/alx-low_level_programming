#include "main.h"
#include <elf.h>

/**
 * print_error - print error message
 *
 * @message: message to be printed
 *
 * @exit_code: code if exit status
*
*/

void print_error(const char *message, int exit_code)
{
	fprintf(stderr, "%s", message);
	exit(exit_code);
}
/**
 * print_magic - print ELF magic bytes
 *
 * @h: header
 *
 * Return: nothing
*/

void print_magic(Elf64_Ehdr h)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%2.2x%s", h.e_ident[i], i == EI_NIDENT - 1 ? "\n" : " ");
}

/**
 * print_class - print ELF class
 * @h: header
 * Return: nothing
*/
void print_class(Elf64_Ehdr h)
{
	printf("  Class:                             ");
	switch (h->e_ident[EI_CLASS])
	{
		case ELFCLASS32:
			printf("ELF32");
			break;
		case ELFCLASS64:
			printf("ELF64");
			break;
		case ELFCLASSNONE:
			printf("none");
			break;
	}
	printf("\n");
}
/**
 * print_data - print ELF data
 *
 * @h: header
 *
 * Return: nothing
*/
void print_data(Elf64_Ehdr h)
{
	printf("  Data:                              ");
	switch (h->e_ident[EI_DATA])
	{
		case ELFDATA2MSB:
			printf("2's complement, big endian");
			break;
		case ELDDATA2LSB:
			printf("2's complement, little endian");
			break;
		case ELFDATANONE:
			printf("none");
			break;
	}
	printf("\n");
}
/**
 * print_version - print ELF version
 *
 * @h: header
 *
 * Return: nothing
*/

void print_version(Elf64_Ehdr h)
{
	printf("  Version:                          %d ", h->eident[EI_VERSION]);
	switch (h->e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)");
			break;
		case EV_NONE:
			printf("%s", "");
			break;
		break;
	}
	printf("\n");
}
/**
 * print_osabi - print ELF osabi
 *
 * @h: header
 *
 * Return: nothing
*/

void print_osabi(Elf64_Ehdr h)
{
	printf("  OS/ABI:                            ");
	switch (h->eident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NETBSD");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - LINUX");
			break;
	}
	printf("\n");
}

/**
 * main - entry point
 *
 * @argc: argument count
 *
 * @argv: arguments
 *
 * Return: integer
*/
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename\n", 98);

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error("Error: Failed to open file\n", 98);
	if (read(fd, &header, sizeof(header)) != sizeof(header))
		print_error("Error: Failed to read ELF header\n", 98);
	if (lseek(fd, 0, SEEK_SET) == -1)
		print_error("Error: Failed to seek to the beginning of the file\n", 98);
	print_magic(h);
	print_class(h);
	print_data(h);
	print_version(h);
	print_osabi(h);
	close(fd);
	return (0);
}
