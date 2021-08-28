#include <unistd.h>
char	*g_var;

void	ft_write(char print_var)
{
	write(1, &print_var, 1);
}

void	ft_putnbr(int nb)
{
	int	i;
	int	g_nb;

	g_nb = (int)nb;
	i = 0;
	if (g_nb == 0)
		ft_write('0');
	if (g_nb < 0)
	{
		ft_write('-');
		g_nb = -g_nb;
	}
	while (g_nb > 0)
	{
		g_var[i] = g_nb % 10 + '0';
		g_nb = g_nb / 10;
		i++;
	}
	i = i - 1;
	while (i >= 0)
	{
		ft_write(g_var[i]);
		i--;
	}
}
/*
int	main(void)
{
	int	input_nb;

	input_nb = -78976;
	ft_putnbr(input_nb);
	return (0);
}
*/
