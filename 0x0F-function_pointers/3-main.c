#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
* main - main function
* @argc: argument count
* @argv: string of arguments in array
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i;
	int j;

	int (*p)(int, int);

	p = get_op_func(argv[2]);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	if (!p)
	{
		printf("Error\n");
		exit(99);
	}

	i = atoi(argv[1]);
	j = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && (j == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", p(i, j));

	return (0);

}
