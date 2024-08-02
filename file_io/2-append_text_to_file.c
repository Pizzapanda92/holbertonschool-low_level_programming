#include <fcntl.h>
#include <unistd.h>
#include <stddef.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The NULL terminated string to add at the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int filegenerator;
	ssize_t countwritten;
	size_t contentlength;

	if (filename == NULL)
	{
		return (-1);
	}

	filegenerator = open(filename, O_WRONLY | O_APPEND);
	if (filegenerator == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		for (contentlength = 0; text_content[contentlength]; contentlength++)
			;

		countwritten = write(filegenerator, text_content, contentlength);
		if (countwritten == -1)
		{
			close(filegenerator);
			return (-1);
		}
	}

	close(filegenerator);
	return (1);
}
