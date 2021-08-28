#include <unistd.h>

void	ft_print_numbers(void)
{
	char	var;

	var = '0';
	while (var <= '9')
	{
		write(1, &var, 1);
		var++;
	}
}
/*
int	main(void)
{
	ft_print_numbers();
	write(1, "\n", 1);
	return (0);
}
*/
