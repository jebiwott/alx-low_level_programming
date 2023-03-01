#include "main.h"

/**
 * rot13 - encodes a string using rot13
 * @str: the string to be encoded
 *
 * Return: the encoded string
 */

char *rot13(char *str)
{
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char num[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i = 0, j;

	while (str[i] != '\0')
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = num[j];
				break;
			}
		}
		i++;
	}
	return (str);
}
