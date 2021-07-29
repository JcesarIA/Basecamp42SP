int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
	{
		c++;
	}
	return (c);
}

char	*ft_strcat(char *dest, char *src)
{
	int	dest_s;
	int	c;

	c = 0;
	dest_s = ft_strlen(dest);
	while (src[c] != '\0')
	{
		dest[dest_s + c] = src[c];
		c++;
	}
	dest[dest_s + c] = '\0';
	return (dest);
}
