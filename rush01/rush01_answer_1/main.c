#include <stdlib.h>

int		read_input(int size, char **argv, char *input);
int		backtrack(int size, char *input, char *output);
void	write_output(int size, char *output);
void	error(void);

int	square_size(char *str)
{
	int		count;
	char	size;

	count = 0;
	while (str[count] != '\0')
		count += 1;
	if ((count + 1) / 2 % 4 != 0)
		return (10);
	size = (count + 1) / 2 / 4;
	return (size);
}

void	reset_output(int size, char *output)
{
	int	i;

	i = 0;
	while (i < size * size)
	{
		output[i] = '\0';
		i += 1;
	}
}

void	all_free(char *list1, char *list2)
{
	free(list1);
	free(list2);
}

int	execution(int size, char **argv)
{
	char	*input;
	char	*output;

	input = malloc(sizeof(char) * size * size);
	output = malloc(sizeof(char) * size * size);
	reset_output(size, output);
	if (input == NULL || output == NULL)
	{
		all_free(input, output);
		return (1);
	}
	if (read_input(size, argv, input) == 1)
	{
		all_free(input, output);
		return (1);
	}
	if (backtrack(size, input, output) == 1)
	{
		all_free(input, output);
		return (1);
	}
	write_output(size, output);
	all_free(input, output);
	return (0);
}

int	main(int argc, char **argv)
{
	char	size;

	if (argc != 2)
	{
		error();
		return (1);
	}
	size = square_size(argv[1]);
	if (size == 10)
	{
		error();
		return (1);
	}
	if (execution(size, argv) == 1)
	{
		error();
		return (1);
	}
}
