#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	cpy;

	i = 0;
	while (i < size / 2)
	{
		cpy = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = cpy;
		i++;
	}
}
/*
int	main(void)
{
	int	n;
	int	ary[5] = {1, 2, 3 ,4};

	n = 0;
	while (n < 5 - 1)
	{
		printf("%d", ary[n]);
		n++;
	}
	printf("\n");
	ft_rev_int_tab(ary, 4);
	n = 0;
	while (n < 5 -1)
	{
		printf("%d", ary[n]);
		n++;
	}
	return (0);
}
*/
