#include <stdio.h>

/**
 * main - program that prints the alphabet in lowercase, and then in uppercase,
 * You can only use the putchar
 * Return: 0
 */

int main(void)
{
int lowercase = 'a';
int uppercase = 'A';
while (lowercase <= 'z')
{
putchar(lowercase);
lowercase++;
}
while (uppercase <= 'Z')
{
putchar(uppercase);
uppercase++;
}
putchar('\n');
return (0);
}
