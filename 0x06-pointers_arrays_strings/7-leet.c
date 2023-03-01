#include "main.h"

/**
 * *leet - encodes a string
 * Description: this function encodes a string to 1337
 * @s: string to be encoded
 * Return: encoded number
 */

char *leet(char *s)
{
	char letters[10] = "aAeEoOtTlL";
	char num[10] = "4433007711";
	int i = 0, j;

	while (s[i] != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = num[j];
			}
		}
		i++;
	}
	return (s);
}
