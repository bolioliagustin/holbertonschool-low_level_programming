#include "main.h"
/**
* main - create file copi
* @argv: strings of the array
* @argc: array of the strings
* Return: return 0
*/
int main(int argc, char *argv[])
{
int i_open1, i_open2, i_write, close_1, close_2;
int i = 1024;
char buffer[1025];
if (argc != 3)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
}

if (argv[1] == NULL)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s \n", argv[1]);
	exit(98);
}
i_open1 = open(argv[1], O_RDONLY);
i_open2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
if (i_open1 == -1)
{
	i_open2 = open(argv[2], O_TRUNC | O_WRONLY);
}
while (i == 1024)
{
	i = read(i_open1, buffer, 1024);
	if (i == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	i_write = write(i_open2, buffer, i);
	if (i_write == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
}
close_1 = close(i_open1);
close_2 = close(i_open2);
if (close_1 == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", i_open1), exit(100);
if (close_2 == -1)
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", i_open2), exit(100);
return (0);
}
