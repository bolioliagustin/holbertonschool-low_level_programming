#include "main.h"
/**
* main - create file copi
* @argv: strings of the array
* @argc: array of the strings
*/
int main(int argc, char *argv[])
{
ssize_t i_open1, i_open2, i_write;
int i = 1024;
char buffer[1025];
if (argc != 2)
{
	dprintf(STDERR_FILENO,"Usage: cp %s %s\n",argv[1], argv[2]);
	exit(97);
}
i_open1 = open(argv[1], O_RDONLY);
if (i_open1 = -1)
{
	dprintf(STDERR_FILENO,"Error: Can't read from file %s \n",argv[1]);
	exit(98);
}
i_open2 = open(argv[2], O_CREATE | O_TRUNC | O_WRONLY, 0664);
while (i == 1024)
{
	i = read(i_open1, buffer, 1024);
	i_write = write(i_read, buffer, i);
}
close(i_open1);
return (0);
}
