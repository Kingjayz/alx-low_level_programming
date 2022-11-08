#incldue "main.h

/**
*creat_array - array for prints a string
*@size: number elements array
*@c: char
*Return: pointer
*/
char *creat_array(unsigned int size, char c)
{
	char *buffer;
	unsigned int position;

	if (size == 0)
	{
		return (NULL);
	}

/*Define values with mallooc*/
	buffer = (char *) malloc(size * sizeof(c));

	if (buffer == 0)
	{
		return (NULL);
	}

	else
	{
		position = 0;
	while (position < size)
	{
		*(buffer + positin) = c;
		position++;
	}

	return (buffer);
}
