#include "main.h"
/**
 * _strcmpdir - compares string to find dir.
 *
 * @s1: first string.
 * @s2: second string.
 *
 * Return: if match and any other number if otherwise
 **/
int _strcmpdir(char *s1, char *s2)
{
	int i = 0;

	for (; (*s2 != '\0' && *s1 != '\0') && *s1 == *s2; s1++)
	{
		if (i == 3)
			break;
		i++;
		s2++;
	}

	return (*s1 - *s2);
}
/**
 * _putchar - putchar character
 * @c: character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * place - similar to puts in C
 * @str: a pointer to integer
 * Return: int
 */
void place(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
}

/**
 * _strlen - string length
 * @str: string.
 * Return: Length.
 */
int _strlen(char *str)
{
	int i;

		for (i = 0; str[i] != '\0'; i++)
			;

	return (i);
}

/**
 * str_concat - concatane strings.
 * @s1: first string.
 * @s2: second string.
 * Return: strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *a;

	int lens1, lens2, j, i, e;

		if (s1 == NULL)
			s1 = "";

		if (s2 == NULL)
			s2 = "";

	lens1 = _strlen(s1);

	lens2 = _strlen(s2);

	a = malloc(((lens1) + (lens2) + 1) * sizeof(char));

		if (a == NULL)
			return (NULL);

	for (j = 0; j < lens1; j++)
	{
		a[j] = s1[j];
	}

		for (i = lens1, e = 0; e <= lens2; i++, e++)
	{
			a[i] = s2[e];
	}
	return (a);
}
