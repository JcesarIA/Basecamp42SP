unsigned int	ft_strlen(char *str)
{
	unsigned int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	c;
	unsigned int	i;

	if (size <= ft_strlen(dest))
		return (size + ft_strlen(src));
	c = ft_strlen(dest);
	i = 0;
	while (src[i] != '\0' && c + 1 < size)
	{
		dest[c] = src[i];
		c++;
		i++;
	}
	dest[c] = '\0';
	return (ft_strlen(dest) + ft_strlen(&src[i]));
}
