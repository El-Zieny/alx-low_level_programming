#include <stdlib.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 * Return: Always 0 (success)
 */
int main(void)
{
        int n;

        if (n == 0)
                printf("%d is zero\n", n);
        else if (n > 0)
                printf("%d is positive\n", n);
        else
                printf("%d is negative\n", n);
        return (0);
}
