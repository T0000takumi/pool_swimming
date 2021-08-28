#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power > 1)
		return (nb * ft_recursive_power(nb, (power - 1)));
	if ((nb == 0) || (power == 0))
		return (1);
	if (power == 1)
		return (nb);
	return (0);
}
/*
int	main(void)
{
	int	input_nb;
	int	input_power;

	printf("[NUMVER] ");
	scanf("%d", &input_nb);
	printf("[power] ");
	scanf("%d", &input_power);
	printf("%d^%d = %d",
		input_nb, input_power, ft_recursive_power(input_nb, input_power));
	return (0);
}
*/
