#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int start_prompt(char *buf, char *s);
int _strcmp(char *s1, char *s2);

char *buffer;
char *s = "salir";
size_t bufsize = 1;
int characters;

int main()
{
/**	pid_t my_pid;
	my_pid = getpid();
*/
	buffer = (char *)malloc(bufsize * sizeof(char));
	if( buffer == NULL)
	{
		perror("Unable to allocate buffer");
		return (1);
	}
	printf("$ ");
	characters = getline(&buffer,&bufsize,stdin);
	if (characters < 0)
		return (-1);
	start_prompt(buffer, s);
	free(buffer);
	return(0);
}
int start_prompt(char *buffer,char *s)
{
	printf("%s, %s", buffer, s);

	if (_strcmp(buffer,s) != 0)
	{
		printf("%s", buffer);
		printf("$ ");
		characters = getline(&buffer,&bufsize,stdin);
		if (characters < 0)
			return (-1);
		start_prompt(buffer, s);
	}
	else
	{
		return(0);
	}
	return (0);
}
/**
 * _strcmp - compare two strings
 * @s1: string to compare
 * @s2: string to compare too
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int j;

	while ((s1[i] != s2[i]) || (s1[i] != '\0'))
	{
		j = s1[i] - s2[i];
		if (j != 0)
		{
			return (j);
		}
		i++;
	}
	return (0);
}
