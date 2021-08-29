#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main(void)
{
	char input_str[5];
	int judge_input;

	scanf("%s", input_str);
	judge_input = ft_str_is_numeric(input_str);
	printf("[%d] is returned.\n", judge_input);
	return (0);
}
*/
