#include <unistd.h>

void	ft_put_char(char n)
{
	write(1, &n, 1);
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < 100)
	{
		y = x + 1;
		while (y < 100)
		{
			ft_put_char((char)x / 10 + '0');
			ft_put_char((char)x % 10 + '0');
			write(1, " ", 1);
			ft_put_char((char)y / 10 + '0');
			ft_put_char((char)y % 10 + '0');
			if (!((x == 98) && (y == 99)))
				write(1, ", ", 2);
			y++;
		}
		x++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
