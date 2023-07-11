#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_addr - prints add
 * @ptr: magic.
 * Return: success
 */
void print_addr(char *ptr)
{
	int a;
	int bn;
	char sys;

	printf("  Entry point address:               0x");

	sys = ptr[4] + '0';
	if (sys == '1')
	{
		bn = 26;
		printf("80");
		for (a = bn; a >= 22; a--)
		{
			if (ptr[a] > 0)
				printf("%x", ptr[a]);
			else if (ptr[a] < 0)
				printf("%x", 256 + ptr[a]);
		}
		if (ptr[7] == 6)
			printf("00");
	}

	if (sys == '2')
	{
		bn = 26;
		for (a = bn; a > 23; a--)
		{
			if (ptr[a] >= 0)
				printf("%02x", ptr[a]);

			else if (ptr[a] < 0)
				printf("%02x", 256 + ptr[a]);

		}
	}
	printf("\n");
}

/**
 * print_type - prints typee
 * @ptr: magic.
 * Return: success
 */
void print_type(char *ptr)
{
	char type = ptr[16];

	if (ptr[5] == 1)
		type = ptr[16];
	else
		type = ptr[17];

	printf("  Type:                              ");
	if (type == 0)
		printf("NONE (No file type)\n");
	else if (type == 1)
		printf("REL (Relocatable file)\n");
	else if (type == 2)
		printf("EXEC (Executable file)\n");
	else if (type == 3)
		printf("DYN (Shared object file)\n");
	else if (type == 4)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", type);
}

/**
 * print_osab - prints o
 * @ptr: magic.
 * Return: success
 */
void print_osab(char *ptr)
{
	char osab = ptr[7];

	printf("  OS/ABI:                            ");
	if (osab == 0)
		printf("UNIX - System V\n");
	else if (osab == 2)
		printf("UNIX - NetBSD\n");
	else if (osab == 6)
		printf("UNIX - Solaris\n");
	else
		printf("<unknown: %x>\n", osab);

	printf("  ABI Version:                       %d\n", ptr[8]);
}


/**
 * print_version - prints ver
 * @ptr: magic.
 * Return: no return.
 */
void print_version(char *ptr)
{
	int ver = ptr[6];

	printf("  Ver:                           %d", ver);

	if (ver == EV_CURRENT)
		printf(" (current)");

	printf("\n");
}
/**
 * print_data - prints data
 * @ptr: magic.
 * Return: no return.
 */
void print_data(char *ptr)
{
	char d = ptr[5];

	printf("  Data:                              2's complement");
	if (d == 1)
		printf(", little endian\n");

	if (d == 2)
		printf(", big endian\n");
}
/**
 * print_magic - prints magic info.
 * @ptr: magic.
 * Return: no return.
 */
void print_magic(char *ptr)
{
	int b;

	printf("  Magic:  ");

	for (b = 0; b < 16; b++)
		printf(" %02x", ptr[b]);

	printf("\n");

}

/**
 * check_sys - check the version system.
 * @ptr: magic.
 * Return: no return.
 */
void check_sys(char *ptr)
{
	char s = ptr[4] + '0';

	if (s == '0')
		exit(98);

	printf("ELF Header:\n");
	print_magic(ptr);

	if (s == '1')
		printf("  Class:                             ELF32\n");

	if (s == '2')
		printf("  Class:                             ELF64\n");

	print_data(ptr);
	print_version(ptr);
	print_osab(ptr);
	print_type(ptr);
	print_addr(ptr);
}

/**
 * check_elf - check if it is an elf file.
 * @ptr: magic.
 * Return: 1 if it is an elf file. 0 if not.
 */
int check_elf(char *ptr)
{
	int ad = (int)ptr[0];
	char E = ptr[1];
	char L = ptr[2];
	char F = ptr[3];

	if (ad == 127 && E == 'E' && L == 'L' && F == 'F')
		return (1);

	return (0);
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int f, r_r;
	char ptr[27];

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n");
		exit(98);
	}

	f = open(argv[1], O_RDONLY);

	if (f < 0)
	{
		dprintf(STDERR_FILENO, "Err: file can not be open\n");
		exit(98);
	}

	lseek(f, 0, SEEK_SET);
	r_r = read(f, ptr, 27);

	if (r_r == -1)
	{
		dprintf(STDERR_FILENO, "Err: The file can not be read\n");
		exit(98);
	}

	if (!check_elf(ptr))
	{
		dprintf(STDERR_FILENO, "Err: It is not an ELF\n");
		exit(98);
	}

	check_sys(ptr);
	close(f);

	return (0);
}
