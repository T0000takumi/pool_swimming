#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*ary;
	int	i;

	ary = malloc(sizeof(int)*(max - min));
	if (max <= min)
		return (NULL);
	i = 0;
	while (max > min)
	{
		ary[i] = min;
		i++;
		min++;
	}
	return (ary);
}
/*
#include <stdio.h>

int	main(void)
{
    int x;
	int y;
	int *num_ary;
	int i;

	x = 5;
	y = 20;
	i = 0;
	num_ary = ft_range(x, y);
	while (num_ary[i] != 0)
	{
		printf("%d ", num_ary[i]);
		i++;
	}
	return (0);
}
*/
