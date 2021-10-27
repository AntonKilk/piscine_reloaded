int		ft_sqrt(int nb)
{
	int i;
	int sqrt;

	i = 0;
	sqrt = 0;
	while (sqrt <= nb)
	{
		if (sqrt == nb)
			return (i);
		i++;
		sqrt = i * i;
	}
	return (0);
}
