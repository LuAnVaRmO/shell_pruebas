#include <stdio.h>
#include <stdlib.h>
/**
 * main Entry point
 *
 * Return: succes 0 | 1 if fails
 */
int main()
{
	char *buff;
	size_t size = 1;
	int received;

	buff = (char *)malloc(size * sizeof(char));
	if( buff == NULL)
	{
		perror("Unable to allocate buffer");
		return (1);
	}

	printf("$ ");
	received = getline(&buff,&size,stdin);
	if (received == -1)
		return (1);
	printf("%s",buff);
	free(buff);
	return(0);
}
