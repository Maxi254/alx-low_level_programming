#include "main.h"
#include <stdio.h>

/**
 * error_file - finds out if files can be opened
 * @file_from: file_from.
 * @file_to: file_to.
 * @argv: arguments vector.
 * Return: success
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code for Holberton School students.
 * @argc: number of arguments.
 * @argv: arguments vector.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int f_f, f_t, e_c;
	ssize_t nchar, wr;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	f_f = open(argv[1], O_RDONLY);
	f_t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(f_f, f_t, argv);

	nchar = 1024;
	while (nchar == 1024)
	{
		nchar = read(f_f, buf, 1024);
		if (nchar == -1)
			error_file(-1, 0, argv);
		wr = write(f_t, buf, nchar);
		if (wr == -1)
			error_file(0, -1, argv);
	}

	e_c = close(f_f);
	if (e_c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_f);
		exit(100);
	}

	e_c = close(f_t);
	if (e_c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_f);
		exit(100);
	}
	return (0);
}

