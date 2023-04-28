#include <stdio.h>
/**
 * myStartupFun - function
 */
void myStartupFun(void) __attribute__ ((constructor));
/**
 * before_main - prints before main function exucuted
 */
void before_main(void)
{
	printf("You're beat! and yet, you must allow,\n
			I bore my house upon my back!\n");
}
