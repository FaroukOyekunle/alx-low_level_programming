#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_error - Prints an error message to stderr
 * @message: The error message to print
 */
void print_error(const char *message)
{
	fprintf(stderr, "%s\n", message);
	exit(98);
}

/**
 * print_elf_header_info - Prints information from the ELF header
 * @header: The ELF header
 */
void print_elf_header_info(const Elf64_Ehdr *header)
{
	printf("Magic: ");
	for (int i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");
	printf("Class:                             %s\n",
	       header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" :
	       header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "Unknown");
	printf("Data:                              %s\n",
	       header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
	       header->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "Unknown");
	printf("Version:                           %d (current)\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
		case ELFOSABI_HPUX: printf("HP-UX\n"); break;
		case ELFOSABI_NETBSD: printf("NetBSD\n"); break;
		case ELFOSABI_LINUX: printf("Linux\n"); break;
		case ELFOSABI_SOLARIS: printf("Sun Solaris\n"); break;
		case ELFOSABI_AIX: printf("IBM AIX\n"); break;
		case ELFOSABI_IRIX: printf("SGI Irix\n"); break;
		case ELFOSABI_FREEBSD: printf("FreeBSD\n"); break;
		case ELFOSABI_TRU64: printf("Compaq TRU64 UNIX\n"); break;
		case ELFOSABI_MODESTO: printf("Novell Modesto\n"); break;
		case ELFOSABI_OPENBSD: printf("OpenBSD\n"); break;
		default: printf("Unknown\n");
	}
	printf("ABI Version:                       %d\n", header->e_ident[EI_ABIVERSION]);
	printf("Type:                              ");
	switch (header->e_type)
	{
		case ET_NONE: printf("None (Unknown type)\n"); break;
		case ET_REL: printf("Relocatable file\n"); break;
		case ET_EXEC: printf("Executable file\n"); break;
		case ET_DYN: printf("Shared object file\n"); break;
		case ET_CORE: printf("Core file\n"); break;
		default: printf("Unknown\n");
	}
	printf("Entry point address:               0x%lx\n", header->e_entry);
}

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of command-line argument strings
 *
 * Return: 0 on success, or the corresponding error code on failure
 */
int main(int argc, char *argv[])
{
	int fd;
	Elf64_Ehdr header;

	if (argc != 2)
	{
		print_error("Usage: elf_header elf_filename");
	}

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		print_error("Error: Cannot open file");
	}

	ssize_t bytes_read = read(fd, &header, sizeof(header));
	if (bytes_read == -1 || bytes_read < (ssize_t)sizeof(header))
	{
		print_error("Error: Cannot read file");
	}

	if (lseek(fd, 0, SEEK_SET) == -1)
	{
		print_error("Error: Cannot reset file offset");
	}

	print_elf_header_info(&header);

	if (close(fd) == -1)
	{
		print_error("Error: Cannot close file");
	}

	return (0);
}
