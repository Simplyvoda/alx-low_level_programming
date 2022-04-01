/**
 * print_string - Prints all char of a string
 *
 * @str: Pointer to string
 *
 * Return: void
 */

void print_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
}
