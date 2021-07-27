char	*ft_strcapitalize(char *str)
{
	int	c;
	int	i;

	c = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (c == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			c++;
		}
		else if (c > 0 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		else if ((str[i] < '0') || (str[i] > '9' && str[i] < 'A')
			|| (str[i] > 'Z' && str[i] < 'a') || (str[i] > 'z'))
			c = 0;
		else
			c++;
		i++;
	}
	return (str);
}
