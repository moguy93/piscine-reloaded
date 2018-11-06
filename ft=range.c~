int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	i = 0;
	if (!(range = malloc(sizeof(int) * (max - min))))
		return (0);
	while (min < max)
	{
		range[i] = min;
		i++;
		min++;
	}
	return (*range);
}
