/**
 * _strlen - find the length of a string
 *
 * @s: pointer to the string to be checked
 *
 * Return: null
*/


int _strlen(const char *p)
{
int j = 0;
while (p[i])
	j++;

return (j);
}


/**
 * *_strcpy -  copies the string pointed to by src
 *
 * @dest: char type string
 *
 * @src: char type string
 *
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 *
 * Return: Pointer to `dest`
 */

char *_strcpy(char *dest, const char *src)
{
	int j = -1;

	do {
		j++;
		dest[j] = src[j];
	} while (src[j] != '\0');

	return (dest);
}
