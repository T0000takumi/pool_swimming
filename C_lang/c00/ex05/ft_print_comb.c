#include <unistd.h>

char	g_1;
char	g_2;
char	g_3;

void	ft_write(char a, char b, char c)
{
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	g_1 = '0';
	while (g_1 <= '9')
	{
		g_2 = '0';
		while (g_2 <= '9')
		{
			g_3 = '0';
			while (g_3 <= '9')
			{
				if ((g_1 == '7') && (g_2 == '8') && (g_3 == '9'))
					ft_write(g_1, g_2, g_3);
				else if (g_1 < g_2 && g_2 < g_3)
				{
					ft_write(g_1, g_2, g_3);
					write(1, ", ", 1);
				}
				++g_3;
			}
			++g_2;
		}
		++g_1;
	}
}
/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
