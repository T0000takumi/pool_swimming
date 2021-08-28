char	look_left(int pro[2], int size, char *output)
{
	int		i;
	int		j;
	int		k;
	char	count;

	i = pro[0];
	output[i] = pro[1] + '0';
	j = 0;
	count = '0';
	while (j < size)
	{
		k = 0;
		while (k < j)
		{
			if (output[i / size * size + k] > output[i / size * size + j])
				break ;
			k += 1;
		}
		if (j == k)
			count += 1;
		j += 1;
	}
	return (count);
}

char	look_right(int pro[2], int size, char *output)
{
	int		i;
	int		j;
	int		k;
	char	count;

	i = pro[0];
	output[i] = pro[1] + '0';
	j = size - 1;
	count = '0';
	while (j >= 0)
	{
		k = size - 1;
		while (k > j)
		{
			if (output[i / size * size + k] > output[i / size * size + j])
				break ;
			k -= 1;
		}
		if (k == j)
			count += 1;
		j -= 1;
	}
	return (count);
}

char	look_up(int pro[2], int size, char *output)
{
	int		i;
	int		j;
	int		k;
	char	count;

	i = pro[0];
	output[i] = pro[1] + '0';
	j = 0;
	count = '0';
	while (j < size)
	{
		k = 0;
		while (k < j)
		{
			if (output[k * size + i % size] > output[j * size + i % size])
				break ;
			k += 1;
		}
		if (j == k)
			count += 1;
		j += 1;
	}
	return (count);
}

char	look_down(int pro[2], int size, char *output)
{
	int		i;
	int		j;
	int		k;
	char	count;

	i = pro[0];
	output[i] = pro[1] + '0';
	j = size - 1;
	count = '0';
	while (j >= 0)
	{
		k = size - 1;
		while (k > j)
		{
			if (output[k * size + i % size] > output[j * size + i % size])
				break ;
			k -= 1;
		}
		if (k == j)
			count += 1;
		j -= 1;
	}
	return (count);
}
