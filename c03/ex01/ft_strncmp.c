int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int nn;
	char c1;
	char c2;

	nn =0;
	while (*s2 !='\0' && nn != n - 1 )
	{
		c1 = *s1++;
		c2 = *s2++;
		nn++;
		if(c1 < c2)
			return (-1);
		else if (c1 > c2)
			return (1);
	}
	if(*s1 < *s2)
		return (-1);
	else if (*s1 > *s2)
		return (1);
	return (0);	
}
