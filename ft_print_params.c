void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		*str++;
	}
}

int	main(int ac, char **av)
{
	int i;

	i = 1;
	while (i <= ac)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
}
