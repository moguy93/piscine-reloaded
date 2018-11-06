void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		*str++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

void	ft_swap(char **av)
{
	char	*temp;
	int	i;
	int	j;

	j = 0;
	i = 1;
	while (av[i] != '\0')
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			while (av[i][j] '\0' && av[i + 1][j] != '\0')
			{
				temp[j] = av[i][j];
				av[i][j] = av[i + 1][j];
				av[i + 1][j] = temp[j];
				j++;
			}
			i = 1;
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	int i;

	i = 1;
	ft_swap(char **av);
	while (i <= ac)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
}
