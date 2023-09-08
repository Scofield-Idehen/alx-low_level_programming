#include <stdio.h>

/**
 * main - program that prints all single digit numbers of
 * base 10 starting from
 * You are not allowed to use any variable of type char
 * You can only use the putchar function
 * Return: 0
 */

int main(void)
{
int num = 0;
while (num < 10)
{
putchar(num + '0');
num++;
}
putchar('\n');
return (0);
}
