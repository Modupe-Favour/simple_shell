#include "main.h"

/**
 * *nbr_spaces - return the number of occurent of a string
 * @s: string to be checked
 * Return: int
 */

unsigned int nbr_spaces(char *s)
{
	int j, cmpt = 0;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j]  == ' ')
			cmpt++;
	}

	return (cmpt);
}


/**
  *stringToTokens - split a sentence into multiple words.
  *@str: the string passed as argument.
  *Return: tokens
  */
char **stringToTokens(char *str)
{
int j = 0;
const char separator[] = " ";
int spaces = nbr_spaces(str);
char **tokens = malloc(sizeof(char *) * (spaces + 1));
char *token;

if (!tokens)
{
	fprintf(stderr, "sh: allocation error\n");
	exit(1);
}

token = strtok(str, separator);

while (token != NULL)
{
	tokens[j] = token;
	token = strtok(NULL, separator);
	j++;
}
tokens[j] = NULL;

return (tokens);
}
