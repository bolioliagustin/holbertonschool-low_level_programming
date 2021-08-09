#include "main.h"
/**
*read_textfile - read text the file
*@filename: file name a read.
*@letters: letters in the file
*Return: return file
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buffer;
ssize_t i_open, i_read, i_write;
	if (!filename)
	{
		return (0);
	}
buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		return (0);
	}
i_open = open(filename, O_RDONLY);
i_read = read(i_open, buffer, letters);
i_write = write(STDOUT_FILENO, buffer, letters);

if (i_open == -1 || i_read == -1 || i_write == -1 || i_write != i_read)
	{
	free(buffer);
	return (0);
	}
	free(buffer);
	close(i_open);
	return (i_write);
}
