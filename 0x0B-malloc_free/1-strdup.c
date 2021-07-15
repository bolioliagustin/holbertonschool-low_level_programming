#include <stdlib.h>
#include <stdio.h>
#include "holberton.h"

char *_strdup(char *str)
{
    char *p = NULL;
    int i = 0;
    int l = 0;

    for (l = 0; *(str+l) != '\0'; l++) 
    {

    }
    p = malloc(sizeof(char)*l);
    if (p)
    {
        for (i = 0; i < l; i++)
        {
            p[i] = str[i];     
        }
        p[l] = '\0';
    }
    return (p);
}