#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a % *b;
	*a = *a / *b;
	*b = tmp;
}
/*
int	main(void)
{
	int	x;
	int	y;

	x = 29;
	y = 7;
	ft_ultimate_div_mod(&x, &y);
	return (0);
}
*/
