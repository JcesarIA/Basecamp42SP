#include <unistd.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && (*s1 && *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

void	print(char **args, int argc)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		write(1, args[i], ft_len(args[i]));
		write(1, "\n", 1);
		i++;
	}
}

void	swap(char **argv, int i, int j)
{
	char	*aux;

	aux = argv[i];
	argv[i] = argv[j];
	argv[j] = aux;
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 1;
	j = i + 1;
	if (argc < 1)
		return (0);
	while (i < argc)
	{
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				swap(argv, i, j);
			j++;
		}
		i++;
		j = i + 1;
	}
	print(argv, argc);
	return (1);
}
