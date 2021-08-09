#include "main.h"
/**
 * create_file - Create a file for write
 * @filename: the filename of the file
 * @text_content: the text content of the file
 *  Return: return -1 on error or 1 on success
 */
int create_file(const char *filename, char *text_content)
{
	int i_open, i_write;
	int i = 0;

	if (!filename)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[i])
		{
			i++;
		}
	}
	i_open = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);
	i_write = write(i_open, text_content, i);
	if (i_open == -1 || i_write == -1)
	{
		return (-1);
	}
	close(i_open);
	return (1);
}
