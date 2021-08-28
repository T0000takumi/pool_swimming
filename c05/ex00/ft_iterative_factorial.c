#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	if (nb == 0)
		return (1);
	if ((nb < 0) || (nb >= 14))
		return (0);
	res = nb;
	i = 1;
	while (i < nb)
	{
		res *= i;
		i++;
	}
	return (res);
}
/*
int	main(void)
{
	int	ans;

	scanf("%d", &ans);
	printf("%d! = %d\n", ans, ft_iterative_factorial(ans));
	return (0);
}
*/