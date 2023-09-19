#include "main.h"
#include <stdio.h>

/**
 * main - this checks the value of the code
 *
 * Return: qill return 0.
 */
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
