#include <stdio.h>
#include "main.h"

/**
* rot13 - Encodes a string (Used to encode rot13)
* @str: Sets of strings for encoding
* Return: Returns pointers to the encoded strings
*/

char *rot13(char *str)
{
	int position0 = 0, position1;

	char alphabet[52] = {'A', 'B', 'C', 'D', 'E', 'F',
				'G', 'H', 'I', 'J', 'K', 'L',
				'M', 'N', 'O', 'P', 'Q', 'R',
				'S', 'T', 'U', 'V', 'W', 'X',
				'Y', 'Z', 'a', 'b', 'c', 'd',
				'e', 'f', 'g', 'h', 'i', 'j',
				'k', 'l', 'm', 'n', 'o', 'p',
				'q', 'r', 's', 't', 'u', 'v',
				'w', 'x', 'y', 'z'};

	char rot13key[52] = {'N', 'O', 'P', 'Q', 'R', 'S',
				'T', 'U', 'V', 'W', 'X', 'Y',
				'Z', 'A', 'B', 'C', 'D', 'E',
				'F', 'G', 'H', 'I', 'J', 'K',
				'L', 'M', 'n', 'o', 'p', 'q',
				'r', 's', 't', 'u', 'v', 'w',
				'x', 'y', 'z', 'a', 'b', 'c',
				'd', 'e', 'f', 'g', 'h', 'i',
				'j', 'k', 'l', 'm'};

	while (str[position0])
	{
		for (position1 = 0; position1 < 52; position1++)
		{
			if (str[position0] == alphabet[position1])
			{
				str[position0] = rot13key[position1];
				break;
			}
		}

		position0++;
	}

	return (str);
}
