#include <unistd.h>

int ft_strcmp(char *s1, char *s2);
void	ft_write(char c);

int	main(int argc, char *argv)
{
	int	i;
	int	j;
	int sml;
	char *tmp;

	i = 1;
	while (i < argc)
	{
		sml = i;
		j = i + 1;
		while (j < argc)
		{
			if(ft_strcmp(argv[i], argv[j]) > 0)
				sml = j;
			j++;
		}
		tmp = argv[i];
		argv[i] = arg[sml];
		arg[sml] = tmp;
		i++;
	}
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

int ft_strcmp(char *s1, char *s2)
{
	int i;
	int dif;

	i = 0;
	dif = s1[i] - s2[i];
	while ((dif == 0) && (s1[i] != '\0'))
	{
		i++;
	}
	if (dif > 0)
		dif = 1;
	if (dif < 0)
		dif = -1;
	return (dif);
}

void	ft_write(char c)
{
	write(1, &c, 1);
}
