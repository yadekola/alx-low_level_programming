#include "main.h"

/**
* _strspn - Calculating lenght of prefix
* @s: For strings
* @accept: Another string
* Return: REturns the strings
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int position, looper, tracker;

	tracker = 0;
	for (position = 0; s[position] != '\0'; position++)
	{
		for (looper = 0; accept[looper] != '\0'; looper++)
		{
			if (accept[looper] == s[position])
			{
				tracker++;
				break;
			}
		}
		if (accept[looper] != s[position])
		{
		break;
		}
	}
	return (tracker);
}
