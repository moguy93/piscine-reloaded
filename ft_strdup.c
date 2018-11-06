int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		*str++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int	i;
	char	*copy;

	i = ft_strlen(*src);
	if (!(copy = malloc(sizeof(char) * i)))
		return (0);
	i = 0;
	while (src[i] != '\0')
	{
		copy[i] = src[i];
		i++;
	}
	return (*copy);
}
