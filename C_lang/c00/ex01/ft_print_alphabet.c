#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	var;

	var = 'a';
	while (var <= 'z')
	{
		write(1, &var, 1);
		var++;
	}
}
/*
int	main(void)
{
	ft_print_alphabet();
	write(1, "\n", 1);
	return (0);
}
*/
