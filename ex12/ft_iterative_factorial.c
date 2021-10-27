int		ft_iterative_factorial(int nb)
{
	int i;

	if(nb < 0 || nb > 12)
		return (0);
	else if (nb == 0)
		return (1);
	i = nb;
	while (i-- > 1)
		nb *= i;
	return (nb);
}
