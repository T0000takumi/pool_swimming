#include <stdio.h>

int	ft_atoi(char *str)
{
	int	result;
	int	minus_sign;

	minus_sign = 1;
	result = 0;
	while ((*str == ' ') || (*str == '\b') || (*str == '\n')
		|| (*str == '\r') || (*str == '\f')
		|| (*str == '\t') || (*str == '\v'))
		str++;
	while ((*str == '+') || (*str == '-'))
	{
		if (*str == '-')
			minus_sign *= -1;
		str++;
	}
	while ((*str >= '0') && (*str <= '9'))
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	result *= minus_sign;
	return (result);
}
/*
int	main(void)
{
	char	input[100];
	int	output_result;

	printf
	(
		"ENTER SPACE, - or +, NUM and ARRAY in that order\n"
	);
	scanf("%[^\n]", input);
	output_result = ft_atoi(input);
	printf("=> %d", output_result);
	return (0);
}
*/
