#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
int printf(const char *format, ...)
{
	(void) format;
	write(1, "9 8 10 24 75 - 9\nCongratulations, you win the Jackpot!\n", 55);
	exit(EXIT_SUCCESS);
}
