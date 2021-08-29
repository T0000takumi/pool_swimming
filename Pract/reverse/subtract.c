#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i, j;
	int	cpy[size];

	i = 0;
	while (i < size)
	{
		cpy[i] = tab[(size - 1) - i];
		i++;
	}

	j = 0;
	while (j < size)
	{
		cpy[j] += '0';
		write(1, &cpy[j], 1);
		write(1, " ", 1);
		j++;
	}
}

int	main(void)
{
	int	ary[] = {1, 3, 4, 6, 8, 7, 4};
	int	i;

	for (i = 0; i < 7; i++);
		printf("%d ", ary[i]);

	printf("\n");

	ft_rev_int_tab(ary, 7);

	return (0);
}
