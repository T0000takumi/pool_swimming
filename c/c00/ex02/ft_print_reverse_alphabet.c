#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	var;

	var = 'z';
	while (var >= 'a')
	{
		write(1, &var, 1);
		var--;
	}
}
/*
int	main(void)
{
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
	return (0);
}
*/
