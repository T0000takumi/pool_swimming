#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	i;
	int	tmp;

	if (power > 2)
	{
		i = 1;
		tmp = nb;
		while (i < power)
		{
			tmp *= nb;
			i++;
		}
		return (tmp);
	}
	if ((nb == 0) || (power == 0))
		return (1);
	if (power == 1)
		return (nb);
	if (power == 2)
		return (nb * nb);
	return (0);
}

int	main(void)
{
	int	input_nb;
	int	input_power;

	printf("[NUMVER] ");
	scanf("%d", &input_nb);
	printf("[power] ");
	scanf("%d", &input_power);
	printf("%d^%d = %d",
		input_nb, input_power, ft_iterative_power(input_nb, input_power));
	return (0);
}