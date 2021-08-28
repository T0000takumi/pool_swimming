#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	unsigned int	u_nb;

	u_nb = (int)nb;
	if (u_nb == 0)
		return (1);
	if (u_nb < 0)
		return (0);
	return (u_nb * ft_recursive_factorial(u_nb - 1));
}
/*
int	main(void)
{
	int	ans;

	scanf("%d", &ans);
	printf("%d! = %d", ans, ft_recursive_factorial(ans));
	return (0);
}
*/