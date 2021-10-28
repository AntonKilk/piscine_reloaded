#include <unistd.h>

void		ft_putchar(char c);

void		ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	int i;

	if (argc == 1)
		return (0);
	else
	{
		i = 1;
		while (i < argc)
		{
			ft_putstr(argv[i]);
			i++;
		}
	}
}
