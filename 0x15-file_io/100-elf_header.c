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
	switch (h.e_ident[EI_CLASS])
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
	switch (h.e_ident[EI_DATA])
	{
		case ELFDATA2MSB:
			printf("2's complement, big endian");
			break;
		case ELFDATA2LSB:
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
	printf("  Version:                          %d ", h.e_ident[EI_VERSION]);
	switch (h.e_ident[EI_VERSION])
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
 * print_more_osabi - prints more osabi
 *
 * @h: header
 *
 * Return: nothing
*/
void print_more_osabi(Elf64_Ehdr h)
{
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_MODESTO:
			printf("Nove11 - Modesto");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD");
			break;
		case ELFOSABI_ARM:
			printf("ARM");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App");
			break;
		default:
			printf("<unknown: %x>", h.e_ident[EI_OSABI]);
			break;
	}
}
/**
 * print_abiversion - print abi version
 *
 * @h: header
 *
 * Return: void
*/
void print_abiversion(Elf64_Ehdr h)
{
	printf("  ABI Version:                       %d\n",
			h.e_ident[EI_ABIVERSION]);
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
	switch (h.e_ident[EI_OSABI])
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
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris");
			break;
		case ELFOSABI_AIX:
			printf("UNIX - AIX");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64");
			break;
		default:
			print_more_osabi(h);
			break;
	}
	printf("\n");
}
/**
 * print_type - prints ELF type
 *
 * @h: header
 *
 * Return: nothing
*/
void print_type(Elf64_Ehdr h)
{
	char *ptr = (char *)&h.e_type;
	int i = 0;

	printf("  Type:                              ");
	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
		i = 1;
	switch (ptr[i])
	{
		case ET_NONE:
			printf("NONE (none)");
			break;
		case ET_REL:
			printf("REL (Relocatable file)");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)");
			break;
		case ET_CORE:
			printf("CORE (Core file)");
			break;
		default:
			printf("<unknown>: %x", ptr[i]);
		break;
	}
	printf("\n");
}

/**
 * print_entry - prints ELF entry point
 *
 * @h: header
 *
 * Return: nothing
*/

void print_entry(Elf64_Ehdr h)
{
	int i = 0, len = 0;
	unsigned char *ptr = (unsigned char *)&h.e_entry;

	printf("  Entry point address:               0x");
	if (h.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		i = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!ptr[i])
			i--;
		printf("%x", ptr[i--]);
		for (; i >= 0; i--)
			printf("%02x", ptr[i]);
		printf("\n");
	}
	else
	{
		i = 0;
		len = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!ptr[i])
			i++;
		printf("%x", ptr[i++]);
		for (; i <= len; i++)
			printf("%02x", ptr[i]);
		printf("\n");
	}
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
	int file;
	Elf64_Ehdr header;
	ssize_t bytes;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename\n", 98);

	file = open(argv[1], O_RDONLY);
	if (file == -1)
		print_error("Error: Failed to open file\n", 98);
	bytes = read(file, &header, sizeof(header));
	if (bytes < 1 || bytes != sizeof(header))
		print_error("Error: Failed to read ELF header\n", 98);
	if (header.e_ident[0] == 0x7f && header.e_ident[1] == 'E' &&
			header.e_ident[2]  == 'L' && header.e_ident[3] == 'F')
	{
		printf("ELF HEADER:\n");
	}
	else
		print_error("Error: Not ELF file\n", 98);
	print_magic(header);
	print_class(header);
	print_data(header);
	print_version(header);
	print_osabi(header);
	print_abiversion(header);
	print_type(header);
	print_entry(header);
	if (close(file))
		print_error("Error: Failed to close file descriptor\n", 98);
	return (EXIT_SUCCESS);
}
