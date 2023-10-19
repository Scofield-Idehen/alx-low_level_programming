#include<stdio.h>

/**
 * _100first - Prints a message before main function
 * is executed
 **/
void __attribute__ ((constructor)) _100first(void)
{
	printf("You're beat! and yet, you must allow,\n"
			"I bore my house upon my back!\n");

}
