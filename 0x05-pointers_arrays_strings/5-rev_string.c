#include "main.h"

/**
* rev_string - Code that reverses a string.
* @s: Strings that needs to be reversed
*/

void rev_string(char *s)

{
	int r = 0;
	int len = 0;
	char placeHolder;

	while (s[r++])
	{
		len++;
	}

	for (r = len - 1; r >= len / 2; r--)
	{
		placeHolder = s[r];
		s[r] = s[len - r - 1];
		s[len - r - 1] = placeHolder;
	}
}
