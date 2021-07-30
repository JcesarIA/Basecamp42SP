int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	sum;

	i = 0;
	s = 1;
	sum = 0;
	while ((str[i] > '\b' && str[i] <= '\r') || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			s *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		sum = (str[i] - 48) + (sum * 10);
		i++;
	}
	return (sum * s);
}
