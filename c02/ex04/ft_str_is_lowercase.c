#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
/*
int main()
{
	char input_str[10];

	scanf("%s", input_str);
	int judge_input = ft_str_is_lowercase(input_str);
	printf("[%d] is returned.\n", judge_input);
	return (0);
}
*/
