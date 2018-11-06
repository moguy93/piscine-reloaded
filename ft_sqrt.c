int	ft_sqrt(int nb)
{
	int	r;
	int	n;

	r = 0;
	n = 1;
	if (nb < 1)
		return (0);
	while (r < nb)
	{
		r = n * n;
		if (r == nb)
			return (n);
		n++;
	}
	return (0);
}
