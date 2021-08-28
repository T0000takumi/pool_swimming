char	look_left(int pro[2], int size, char *output);
char	look_right(int pro[2], int size, char *output);
char	look_up(int pro[2], int size, char *output);
char	look_down(int pro[2], int size, char *output);

int	row_check(int pro[2], int size, char *input, char *output)
{
	int		i;
	char	high;
	int		col;

	i = pro[0];
	high = pro[1] + '0';
	col = 0;
	while (output[i / size * size + col] != '\0')
	{
		if (output[i / size * size + col] == high)
			return (1);
		col += 1;
	}
	if (col == size - 1)
	{
		if (look_left(pro, size, output) != input[size * 2 + i / size])
			return (1);
		if (look_right(pro, size, output) != input[size * 3 + i / size])
			return (1);
	}
	return (0);
}

int	col_check(int pro[2], int size, char *input, char *output)
{
	int		i;
	int		row;
	char	high;

	i = pro[0];
	high = pro[1] + '0';
	row = 0;
	while (output[row * size + i % size] != '\0')
	{
		if (output[row * size + i % size] == high)
			return (1);
		row += 1;
	}
	if (row == size - 1)
	{
		if (look_up(pro, size, output) != input[size * 0 + i % size])
			return (1);
		if (look_down(pro, size, output) != input[size * 1 + i % size])
			return (1);
	}
	return (0);
}

int	check(int pro[2], int size, char *input, char *output)
{
	int		i;
	char	high;

	i = pro[0];
	high = pro[1] + '0';
	if (row_check(pro, size, input, output) == 1)
		return (1);
	output[i] = '\0';
	if (col_check(pro, size, input, output) == 1)
		return (1);
	output[i] = high;
	return (0);
}
