#include "main.h"
#include <stdio.h>

/**
 * rot13 - encoder rot13
 * @S: pointer to string params
 *
 * Return: *s
 */

char *rot13(char *S)
{
	int i;
	int j;
	char data1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char datarot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; S[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (S[i] == data1[j])
			{
				S[i] = datarot[j];
				break;
			}
		}
	}
	return (S);
}
