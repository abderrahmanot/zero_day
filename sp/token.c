#include "shell.h"
/**
 * ftoken- function that extracts tokens of a string
 * @nline: string
 * @delim: delimiter
 * Return: pointer to the next token or NULL
 */
char **ftoken(char *nline)
{
	char *tokens;
	char **comd, *tmp;
	unsigned int i, cpt = 0;

	if (nline == NULL)
		return (NULL);
	tmp = _strdup(nline);
	tokens = strtok(tmp, DELIM);
	if (tokens == NULL)
	{
		free(tmp);
		free(nline);
		return (NULL);
	}
	for (i = 0; tokens[i] != '\0'; i++)
	{
		cpt++;
		tokens = strtok(NULL, DELIM);
	}
	free(tmp);
	comd = malloc(sizeof(char *) * (cpt + 1));
	if(comd == NULL)
	{
		free(nline);
		return NULL;
	}
	tokens = strtok(tmp, DELIM);
	for (i = 0; tokens[i] != '\0'; i++)
	{
		comd[i] = tokens;
		tokens = strtok(NULL, DELIM);

	}
	free(nline);
	comd[i] = NULL;
	return (comd);
}

