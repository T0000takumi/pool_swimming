#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	char input_str[5];
	int judge_input;

	scanf("%s", input_str);

	judge_input = ft_str_is_uppercase(input_str);
	printf("[%d] is returned.\n", judge_input);
	return (0);
}
*/
