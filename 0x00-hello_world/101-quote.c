#include <stdio.h>
#include <unisted.h>

/**
 * main - prints the text "and that piece of art is useful"
 * -Dora Korpar, 2015-10-19",
 *  folloed by a nw line, to the standard error.
 *  Return: Always 0 (Success)
 *  */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
