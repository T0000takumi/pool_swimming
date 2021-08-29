#include <unistd.h>

int	read_input(int size, char **argv, char *input)
{
	int		count_i;

	count_i = 0;
	while (argv[1][count_i] != '\0')
	{
		if (count_i % 2 == 0)
		{
			if (argv[1][count_i] < '0' && argv[1][count_i] > size + '0')
				return (1);
			input[count_i / 2] = argv[1][count_i];
		}
		else if (argv[1][count_i] != ' ')
		{
			return (1);
		}
		count_i += 1;
	}
	if (argv[1][count_i - 1] == ' ')
		return (1);
	return (0);
}

void	write_output(int size, char *output)
{
	int	count_o;

	count_o = 0;
	while (count_o < size * size)
	{
		write(1, &output[count_o], 1);
		if (count_o % size == size - 1)
			write(1, "\n", 1);
		count_o += 1;
	}
}

void	error(void)
{
	write(2, "Error\n", 6);
}
