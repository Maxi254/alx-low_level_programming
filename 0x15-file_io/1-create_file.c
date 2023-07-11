#include "main.h"

/**
 * create_file - this one creates filess
 * @filename: filename.
 * @text_content: stuff written  in the file.
 *
 * Return: 1 (success)
 */
int create_file(const char *filename, char *text_content)
{
	int fn;
	int nl;
	int wr;

	if (!filename)
		return (-1);

	fn = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fn == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nl = 0; text_content[nl]; nl++)
		;

	wr = write(fn, text_content, nl);

	if (wr == -1)
		return (-1);

	close(fn);

	return (1);
}
