char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *c1;
	int i;

	i=0;
	c1 = dest;
	while (dest[i] != '0')
	{
		dest[i++];
		if(dest[i] == '\0')
		{
			while (*src != '\0' && 0 != nb)
			{
				dest[i++] = stc[i++];
				nb--;
			}
			break ;
		}
	}
	if ((nb + 1) > 0)
	{
		while (nb != 0)
		{
			dest[i++] = '\0';
		}
	}
	return (c1);
}
