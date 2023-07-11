#include "main.h"

/**
 * read_textfile - reads; text and print letters
 * @filename: F.N
 * @letters: nbrs of letters printed
 *
 * Return: (success)
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int i;
	ssize_t n, w;
	char *buf;

	if (!filename)
		return (0);

	i =  open(filename, O_RDONLY);

	if (i == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	n = read(i, buf, letters);
	w = write(STDOUT_FILENO, buf, n);

	close(i);

	free(buf);

	return (w);
}
