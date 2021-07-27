void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	c;
	int	aux;

	i = 0;
	c = 1;
	while (i < size / 2)
	{
		aux = tab[i];
		tab[i] = tab[size - c];
		tab[size - c] = aux;
		c++;
		i++;
	}
}
