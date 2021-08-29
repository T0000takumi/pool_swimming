#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	argc = 0;
	while (argv[0][i] != '\0')
	{
		ft_write(argv[0][i]);
		i++;
	}
	ft_write('\n');
	return (0);
}
