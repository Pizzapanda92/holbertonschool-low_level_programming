#include "main.h"

/**
 * read_textfile - reads a text file and prints it to POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: actual number of letters it could read and print,
 * or 0 if the file cannot be opened or read, or if filename is NULL,
 * or if write fails or does not write the expected amount of bytes.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t countRead, countWritten;
	char *buffer;
	int fileDescriptor;

	if (filename == NULL)
		return (0);

	fileDescriptor = open(filename, O_RDONLY);
	if (fileDescriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fileDescriptor);
		return (0);
	}

	countRead = read(fileDescriptor, buffer, letters);
	if (countRead == -1)
	{
		free(buffer);
		close(fileDescriptor);
		return (0);
	}

	countWritten = write(STDOUT_FILENO, buffer, countRead);
	if (countWritten == -1 || countWritten != countRead)
	{
		free(buffer);
		close(fileDescriptor);
		return (0);
	}

	free(buffer);
	close(fileDescriptor);
	return (countRead);
}
