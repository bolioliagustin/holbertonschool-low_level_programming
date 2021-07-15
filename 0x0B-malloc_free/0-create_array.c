#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

char *create_array(unsigned int size, char c)
{
    char *p = NULL;
    unsigned int i = 0;
    if (size > 0)
    {
        p = malloc(sizeof(char)*size);
        if(!p)
        {
            return (p);
        }
        for (i = 0;i <= size; i++)
        {
            p[i] = c;
        }
    }
    return(p);
}