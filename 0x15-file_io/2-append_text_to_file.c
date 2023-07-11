#include "main.h"

/**
 * append_text_to_file - adds text to the end of file
 * @filename: filename.
 * @text_content: added ct
 *
 * Return: (success)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fn;
	int nl;
	int wr;

	if (!filename)
		return (-1);

	fn = open(filename, O_WRONLY | O_APPEND);

	if (fn == -1)
		return (-1);

	if (text_content)
	{
		for (nl = 0; text_content[nl]; nl++)
			;

		wr = write(fn, text_content, nl);

		if (wr == -1)
			return (-1);
	}

	close(fn);

	return (1);
}
