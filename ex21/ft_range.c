#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	if (min >= max)
		return (0);
	size = max - min;
	range = (int *)malloc(sizeof(int));
	if (range == NULL)
		return (0);
	i = 0;
	while (i < size)
	{
		range[i] = i + min;
		i++;
	}
	return (range);
}
