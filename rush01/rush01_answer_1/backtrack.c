int	check(int pro[2], int size, char *input, char *output);

int	end_loop(int size, char *output)
{
	int	i;

	i = 0;
	while (i < size * size)
	{
		if (output[i] == '\0')
			return (i);
		i += 1;
	}
	return (-1);
}

int	backtrack(int size, char *input, char *output)
{
	int	pro[2];

	pro[0] = end_loop(size, output);
	if (pro[0] == -1)
		return (0);
	pro[1] = 1;
	while (pro[1] <= size)
	{
		if (check(pro, size, input, output) == 0)
		{
			if (backtrack(size, input, output) == 0)
				return (0);
			else
				output[pro[0]] = '\0';
		}
		else
			output[pro[0]] = '\0';
		pro[1] += 1;
	}
	return (1);
}
