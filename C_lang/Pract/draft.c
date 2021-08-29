#include <unistd.h>

/* 与えられた引数をASCII順に並べる */

int ft_strcmp(char *s1, char *s2);
void	ft_write(char c);

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_strcmp(argv[i][j], );
			j++;
		}
		ft_write('\n');
		i++;
	}
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