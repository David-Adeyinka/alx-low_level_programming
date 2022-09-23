#include <string.h>
#include "main.h"

/**
 * *_strncat - appends the src string to the dest string,
 * and then adds a terminating null byte
 * @scr:  pointer source
 * @dest: destination
 * @n: number of bytes
 *
 * Return: void
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return dest;
}
