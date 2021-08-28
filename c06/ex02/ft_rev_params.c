#include <unistd.h>

void	ft_write(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc - 1;
	while ((i < argc) && (i > 0))
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_write(argv[i][j]);
			j++;
		}
		ft_write('\n');
		i--;
	}
	return (0);
}
