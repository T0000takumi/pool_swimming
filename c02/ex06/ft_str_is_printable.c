#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((((int)str[i] >= 48) && ((int)str[i] <= 57))
				|| (((int)str[i] >= 65) && ((int)str[i] <= 90))
				|| (((int)str[i] >= 97) && ((int)str[i] <= 122))))
			return (0);
		i++;
	}
	return (1);
}
/*
int main()
{
	char input_str[5];
	int i = 0;

	scanf("%s", input_str);
	printf("_Trancerated to ASCII code._\n");
	while (input_str[i])
		printf(" %d", input_str[i++]);
	printf("\n");

	int judge_input = ft_str_is_printable(input_str);
	printf("[%d] is returned.\n", judge_input);
	return (0);
}
*/
