#include <stdio.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	while (str != (void *)0)
	{
		j = 0;
		while (str != (void *)0)
		{
			if ((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= '0' && str[i] <= '9'))
				str[i] = str[i] - 32;
			else if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] + 32;
			j++;
		}
		i++;
	}
	return (str);
}

int main(void)
{
	char put_str[10][10] = {"salut","comment","tu","vas",
		"42mots","quarante","deux","cinquante","et","un"};
	int i, j;

	printf("_BEFORE_ (unprintable characters included)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if(*put_str != '\0')
				printf("%s", *put_str);
		}
	}
	ft_strcapitalize(*put_str);
	printf("_AFTER_\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if(*put_str != '\0')
			{
				printf("%s", *put_str);
			}
		}
	}
	return (0);
}
