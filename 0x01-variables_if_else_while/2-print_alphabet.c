#include <stdio.h>
#include <ctype.h>

/**
 * main - program that prints the alphabet in lowercase,
 * followed by a new line
 * You can only use the putchar
 * Return: 0
 */

int main(void)
{
int letter = 'a';
while (letter <= 'z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
